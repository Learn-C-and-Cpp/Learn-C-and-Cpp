#include <iostream>

class Log
{
private:
    int m_logLevel;

public:
    void setLevel(int level)
    {
        m_logLevel = level;
    }
    void printLevel()
    {
        std::cout <<"[WARNING]:"<< m_logLevel << std::endl;
    }
};

int main()
{
    Log log;
    log.setLevel(2);
    log.printLevel();

    std::cin.get();
    return 0;
}

// void Log::printLevel()
// {
//     std::cout <<"[WARNING]: imple"<< m_logLevel << std::endl;

// }
