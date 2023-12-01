#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <ctime>

namespace pocket {
namespace simlog {

// 日志等级
enum class LogLevel { DEBUG, INFO, WARNING, ERROR, CRITICAL };

class Logger {
private:
    std::ofstream logFile;
    LogLevel currentLogLevel;

    std::string getTimeStamp();
public:
    Logger(const std::string& filename, LogLevel level = LogLevel::INFO);
    ~Logger();

    void setLogLevel(LogLevel level);
    void log(const std::string& message);
};

};
};
