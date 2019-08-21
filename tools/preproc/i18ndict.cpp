
#include <cstdio>
#include <cstdint>
#include <cstdarg>
#include <fstream>
#include "preproc.h"
#include "i18ndict.h"
#include "char_util.h"
#include "utf8.h"

using namespace std;

I18nDict::I18nDict(std::string filename)
{
	ifstream infile(filename.c_str(), ios_base::in);
	string line;
	
	if (!infile.is_open())
		FATAL_ERROR("Failed to open \"%s\" for reading.\n", filename.c_str());
	
	while(getline(infile, line))
	{
		m_strings.push_back(line);
	}
	
}