#pragma once

#include "StringFormatter.hpp"

StringFormatter::StringFormatter(string & Text, const string & FormatPrefix) :
	Text(Text), FormatPrefix(FormatPrefix)
{
}