#include "../Includes/LoggerFactory.h"
#include "../Includes/ConsoleLogger.h"

ILogger * LoggerFactory::Make( )
{
	static ILoggerPtr logger = new ConsoleLogger();

	return logger;
}
