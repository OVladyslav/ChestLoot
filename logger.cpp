#include "logger.h"


Logger& Logger::get()
{
    if (instance == nullptr) { instance = new Logger(); }
    return *instance;
}

void Logger::print(std::string file_name, int line, std::string massage)
{
    my_file << std::setw(25) << std::left << TimeAndDateNow();
    my_file << std::setw(100) << std::left << "Event: " + massage;
    my_file << std::setw(60) << std::left << "[" + file_name + "]";
    my_file << std::setw(15) << std::left << "Line: " + std::to_string(line);
    my_file << std::endl;
}

Logger::Logger()
{
    file_path = "C:/Users/VladyslavO/Documents/Qt_projects/ChestLoot/Logs/" + TimeAndDateNow() + "_Log.txt";
    my_file.open(file_path);
    //my_file << setiosflags(std::ios::left);
}

std::string Logger::TimeAndDateNow()
{
    time_t now = time(0);   // get time now
    struct tm timestruct;
    char am_pm[] = "AM";
    //char buf[80];
    localtime_s(&timestruct, &now);
    if (timestruct.tm_hour > 12)
    {
        timestruct.tm_hour -= 12;
        am_pm[0] = 'P';
    }
    /*
        cout << (timestruct.tm_year + 1900) << '-'
            << (timestruct.tm_mon + 1) << '-'
            << timestruct.tm_mday
            << endl;
        */
    //strftime(buf, sizeof(buf), "%Y-%m-%d %X", &timestruct);
    //cout << buf << endl;

    return std::to_string(timestruct.tm_year + 1900) + '-' +
           std::to_string(timestruct.tm_mon + 1) + '-' +
           std::to_string(timestruct.tm_mday) + '_' +
           std::to_string(timestruct.tm_hour) + '-' +
           std::to_string(timestruct.tm_min) + '-' +
           std::to_string(timestruct.tm_sec) + am_pm;
}
