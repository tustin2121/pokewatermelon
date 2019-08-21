
#ifndef I18NDICT_H
#define I18NDICT_H

#include <cstdint>
#include <string>
#include <map>
#include <vector>

class I18nDict
{
public:
	I18nDict(std::string filename);
	
	std::string Lookup(std::uint32_t index)
	{
		if (index-1 < m_strings.size())
		{
			return m_strings[index-1];
		}
		else
		{
			return std::string("$");
		}
	}

private:
	std::vector<std::string> m_strings;
};

#endif // I18NDICT_H
