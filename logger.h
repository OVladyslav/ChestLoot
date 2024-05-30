#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <string>
#include <ctime>
#include <iomanip>
#include "iostream"

class Logger
{
public:
    static Logger& get();
    Logger(const Logger&) = delete; // rule of three
    Logger& operator=(const Logger&) = delete;
    void print(std::string, int, std::string);
private:
    static Logger* instance;
    std::string file_path;
    std::ofstream my_file;
    Logger();
    ~Logger() = default;
    std::string TimeAndDateNow();
};

//Logger* Logger::instance = nullptr;

#endif // LOGGER_H
