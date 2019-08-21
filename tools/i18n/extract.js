#!node
const path = require('path');
const fs = require('fs');
const { Transform } = require('stream');

const OUTFILENAME = path.resolve(`../../gametext.i18n.txt`);

let outfile = null;
let index = 0;

function writeToOutput(line) {
	return new Promise((resolve, reject)=>{
		if (!outfile.write(`${line}\n`)) {
			outfile.once('drain', resolve);
		} else {
			process.nextTick(resolve);
		}
	});
}

async function processFile(file) {
	try {
		let contents = fs.readFileSync(file, {encoding:'utf8'});
		let lines = [];
		let currStr = '';
		let lastOff = 0;
		let num = 0;
		contents = contents.replace(/([\s]*)?\.string "([^"]*)"\n/gm, function(match, indent, str, offset){
			if (lastOff + 4 < offset) { //
				if (currStr) lines.push(currStr);
				index++;
				currStr = '';
				lastOff = offset;
				num++;
			}
			let ret = (!currStr)? `${indent}.i18n ${index}\n` : '';
			currStr += str;
			lastOff += match.length;
			return ret;
		});
		if (currStr) {
			lines.push(currStr);
			num++;
		}
		if (lines.length) await writeToOutput(lines.join('\n'));
		fs.writeFileSync(file, contents, {encoding:'utf8'});
		console.log(`Replacing ${num} instances in ${file}`);
	} catch (e) {
		console.error(`Could not process file '${file}'.`);
		console.error(e);
	}
}

async function processDirectory(dir) {
	const files = fs.readdirSync(dir, {withFileTypes:true});
	for (const filename of files)
	{
		if (filename.startsWith('.')) continue;
		const file = path.join(dir, filename);
		if (file == OUTFILENAME) continue;
		
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
}

async function countIndex() {
	return new Promise((resolve, reject)=>{
		let rs = fs.createReadStream(OUTFILENAME, {flags:'r', encoding:'utf8'});
		rs.on('error', (e)=>{
			if (e.code == 'ENOENT') {
				console.log('No current string file.');
				resolve();
			} else {
				reject(e);
			}
		});
		rs.on('data', (chunk)=>{
			index += chunk.split('\n').length - 1;
		});
		rs.on('finish', resolve);
		resolve();
	});
}

async function main() {
	await countIndex();

	try {
		outfile = fs.createWriteStream(OUTFILENAME, {flags:'a', encoding:'utf8'});
		outfile.on('error', (e)=>{ console.error(`ERROR: `, e); });
		await processDirectory(path.resolve('../../'));
		outfile.end();
		console.log('Finished.');
	} catch (e) {
		console.error(`Error writing file.`);
		console.error(e);
	}
}

main();
