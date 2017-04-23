#include "String.h"

#include <cstdlib>
#include <stdio.h>
#include <regex>

std::string String::Format(std::string input, ...)
{
	va_list args;
	va_start(args, input);

	int bufferLength = input.length( ) + GetArgsLength(input);

	char * buffer = ( char * ) malloc(bufferLength * sizeof(char));
	if (!buffer)
	{
		exit(1);
	}

	vsprintf(buffer, input.c_str( ), args);

	va_end(args);

	std::string output = buffer;

	free(buffer);

	return output;
}

int String::GetArgsLength(std::string input)
{
	int length = 0;
	va_list args;

	va_start(args, input);

	int argsCount = GetArgsCount(input);
	for (size_t i = 0; i < argsCount; i++)
	{
		length += ( sizeof(*args) * sizeof(char) );

		va_arg(args, char *);
	}
	va_end(args);

	return length;
}

int String::GetArgsCount( const std::string &input)
{
	std::string _input(input);
	int count = 0;
	for (std::smatch matches;
		 std::regex_search(_input, matches, std::regex("%")); ++count)
	{
		_input = matches.suffix( ).str( );
	}

	return count;
}