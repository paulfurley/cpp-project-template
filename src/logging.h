#include "log4cxx/logger.h"

#define LOG_INIT(LOGGER_NAME) log4cxx::LoggerPtr logger(log4cxx::Logger::getLogger(LOGGER_NAME))

// Note that TRACE level is compiled out in release (non-debug) mode.

#define LOG_TRACE(x) LOG4CXX_TRACE(logger, x)
#define LOG_DEBUG(x) LOG4CXX_DEBUG(logger, x)
#define LOG_INFO(x) LOG4CXX_INFO(logger, x)
#define LOG_WARN(x) LOG4CXX_WARN(logger, x)
#define LOG_ERROR(x) LOG4CXX_ERROR(logger, x)
#define LOG_FATAL(x) LOG4CXX_FATAL(logger, x)
