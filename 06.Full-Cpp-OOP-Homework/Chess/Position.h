#ifndef POSITION_H
#define POSITION_H

#include <iostream>

struct position
{
	int x;
	int y;

	bool operator==(const position & rhs) const;
	bool operator!=(const position & rhs) const;

	std::string ToString( );
};
#endif // !POSITION_H