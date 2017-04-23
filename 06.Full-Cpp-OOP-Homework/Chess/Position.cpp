#include "Position.h"
#include "String.h"

bool position::operator==(const position & rhs) const
{
	return ( x == rhs.x && y == rhs.y );
}

bool position::operator!=(const position & rhs) const
{
	return ( x != rhs.x && y != rhs.y );
}

std::string position::ToString( )
{
	return String::Format("x: %d, y: %d", x, y);
}
