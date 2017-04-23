#include "LoggerFactory.h"
#include "ConsoleLogger.h"

ILogger * LoggerFactory::Make( )
{
	static ILoggerPtr logger = new ConsoleLogger();

	return logger;
}
