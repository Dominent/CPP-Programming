#ifndef STRING_H
#define STRING_H

#include <string>
#include <cstdarg>

class String
{
public:
	static std::string Format(std::string text, ...);
};
#endif // !STRING_EXTENSIONS_H