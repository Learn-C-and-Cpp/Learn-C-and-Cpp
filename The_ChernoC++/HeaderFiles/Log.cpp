
#include <iostream>
#include "common.h"
#include "Log.h"

void InitLog()
{
    Log("Initialising Log");
}

void Log(const char* message)
{
	std::cout << "= " << message << std::endl;
	
}

