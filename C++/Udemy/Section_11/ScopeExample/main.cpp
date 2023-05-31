#include <iostream>

int num{300};
static int global_static{4000};

void local_example(int x)
{
    int num{1000}; // local
    std::cout << "Local num is " << num << " in local_example - start " << std::endl;
    num = x;
    std::cout << "Local num is " << num << " in local_example - ends " << std::endl;
}

void global_example()
{
    std::cout << "Global num is " << num << " in global_example - start" << std::endl;

    num *= 2;
    std::cout << "Global num is " << num << " in global_example - end" << std::endl;
}

void static_local_example()
{
    static int num{5000}; // local static
    std::cout << "Local static num is " << num << " in static_local_example - start " << std::endl;
    num += 1000;
    std::cout << "Local static num is " << num << " in static_local_example - end" << std::endl;
}
void static_global_example()
{
    std::cout << "global_static  is " << global_static << " in static_global_example - start " << std::endl;
    global_static += 1500;
    std::cout << "Local static num is " << global_static << " in static_global_example - end" << std::endl;
}

int main()
{
    int num{100};
    int num1{500};
    std::cout << "Local num is " << num << " in main " << std::endl;
    {
        int num{200};
        std::cout << "Local num is " << num << " in inner block in main " << std::endl;
        std::cout << "inner block in main can see out -num1 is " << num1 << std::endl;
    }
    std::cout << "Local num is " << num << " in main " << std::endl;
    std::cout << std::endl;

    local_example(10);
    local_example(20);

    std::cout << std::endl;
    static_local_example();
    static_local_example();
    static_local_example();

    std::cout << std::endl;
    static_global_example();
    static_global_example();

    return 0;
}