#include "../Includes/InputParser.h"

#include <regex>


PlayerMove InputParser::Parse(std::string input)
{
	//move <5 6> to <3 2>
	for (std::smatch matches;
		 std::regex_search(input, matches, std::regex("<.*?>")); )
	{
		for (auto match : matches)
		{
			// TODO(Domi): Parse Input
		}

		input = matches.suffix( ).str( );
	}

	return PlayerMove(position{ 0, 0 }, position{ 0, 0 });
}
