#include "String.h"

#include <string>
#include <cstdarg>
#include <memory>

std::string String::Format(std::string text, ...)
{
	va_list args;

	va_start(args, text);

	int size = _vscprintf(text.c_str(), args);

	std::string result(++size, 0);

	vsnprintf_s(( char* ) result.data( ), size, _TRUNCATE, text.c_str( ), args);

	va_end(args);

	return result;
}