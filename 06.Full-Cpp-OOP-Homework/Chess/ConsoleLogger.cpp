#include "ConsoleLogger.h"

#include <iostream>

void ConsoleLogger::Log(std::string message, LogType logType)
{
	std::cout << std::string(message.length(), '~') << std::endl;
	std::cout << message << std::endl;
	std::cout << std::string(message.length( ), '~') << std::endl;
}
