#ifndef LOGGER_FACTORY_H
#define LOGGER_FACTORY_H

#include "ILogger.h"

class LoggerFactory
{
public:
	static ILoggerPtr Make();
};

#endif // !LOGGER_FACTORY_H
