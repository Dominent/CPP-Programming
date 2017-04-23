#ifndef INPUT_PARSER_H
#define INPUT_PARSER_H

#include "PlayerMove.h"

#include <string>

class InputParser
{
public:
	PlayerMove Parse(std::string input);
};
#endif // !INPUT_PARSER_H

