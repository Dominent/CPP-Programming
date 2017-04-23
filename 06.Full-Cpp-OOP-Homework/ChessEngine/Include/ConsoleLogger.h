#ifndef CONSOLE_LOGGER_H
#define CONSOLE_LOGGER_H

#include "ILogger.h"

class ConsoleLogger : public ILogger
{
	virtual void Log(std::string message, LogType logType);
};

#endif // !CONSOLE_LOGGER_H

