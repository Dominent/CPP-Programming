#ifndef STRING_H
#define STRING_H

#include <string>
#include <cstdarg>

class String
{
public:
	static std::string Format(std::string input, ...);
private:
	static int GetArgsCount(const std::string & input);
	static int String::GetArgsLength(std::string input);
};
#endif // !STRING_EXTENSIONS_H