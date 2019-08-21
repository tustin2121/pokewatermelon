#!node
const path = require('path');
const fs = require('fs');
const { Transform } = require('stream');

const OUTFILENAME = path.resolve(`../../gametext.i18n.txt`);

let outfile = null;
let index = 0;
let currStr = '';

const transformString = new Transform({
	decodeStrings: false,
	transform(chunk, encoding, next) {
		let lastOff = 0;
		// console.log(`chunk: ${typeof chunk}, ${chunk.constructor.name}, ${encoding}`);
		chunk.replace(/([\s]*)?\.string "([^"]*)"$/, function(match, indent, str, offset){
			if (lastOff + 4 > offset) { //
				outfile.write(`${currStr}\n`);
				index++;
				currStr == '';
			}
			let ret = (!currStr)? `.i18n ${index}\n` : '';
			currStr += str;
			return ret;
		});
		next(null, chunk);
	},
});

function sleep(delay) {
	return new Promise((resolve)=>setTimeout(resolve, delay));
}

function renameFile(file) {
	return new Promise(async (resolve, reject)=>{
		let error = null;
		for (let i = 0; i < 5; i++) {
			try {
				fs.renameSync(`${file}.1`, `${file}`);
				return resolve();
			} catch (err) {
				error = err;
				await sleep(200);
			}
		}
		reject(err);
	});
}

function processFile(file) {
	return new Promise((resolve, reject)=>{
		const filein  = fs.createReadStream(file, {encoding:'utf8', autoClose:true});
		const fileout = fs.createWriteStream(`${file}.1`, {encoding:'utf8', autoClose:true});
		
		fileout.on('finish', async ()=>{
			try {
				await renameFile(file);
				resolve();
			} catch (e) {
				reject(e);
			}
		});
		filein.on('error', (e)=>reject(e));
		fileout.on('error', (e)=>reject(e));
		
		filein.pipe(transformString).pipe(fileout);
	});
}

function processDirectory(dir) {
	return new Promise(async (resolve, reject)=>{
		try {
			const files = fs.readdirSync(dir, {withFileTypes:true});
			for (const filename of files)
			{
				if (filename.startsWith('.')) continue;
				const file = path.join(dir, filename);
				console.log(`Examining ${file}`)
				let fileInfo = fs.statSync(file);
				if (fileInfo.isFile())
				{
					switch (path.extname(file))
					{
						case '.inc':
						case '.s':
							await processFile(file);
							break;
						default:
							break;
					}
				}
				else if (fileInfo.isDirectory())
				{
					await processDirectory(file);
				}
			}
		} catch (e) {
			reject(e);
		}
	});
}

try {
	fs.createReadStream(OUTFILENAME, {flags:'r', encoding:'utf8'})
		.on('data', (chunk)=>{
			index += chunk.split('\n').length - 1;
		});
} catch (e) {
	console.log('No current string file.');
}

outfile = fs.createWriteStream(OUTFILENAME, {flags:'a', encoding:'utf8'});
processDirectory(path.resolve('../../')).then(()=>console.log('Finished.')).catch((e)=>console.error(e));
