#ifndef I_LOGGER_H
#define I_LOGGER_H

#include "LogType.h"

#include <string>

typedef class ILogger
{
public:
	virtual void Log(std::string message, LogType logType) = 0;
} *ILoggerPtr;

#endif // !I_LOGGER_H