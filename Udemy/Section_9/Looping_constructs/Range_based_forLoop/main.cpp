/* for(var_type var_name: sequence)
    statement;
*/
#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
    // int scores[]{10, 20, 30, 40};
    // for(auto score: scores)
    // std::cout << score << std::endl;

    std::vector<double> temperatures{87.9, 77.9, 80.0, 72.5};
    double average_temp{};
    double total{};

    for (auto temp : temperatures)
        total += temp;

    // check devision by zero
    if (temperatures.size() != 0)
        average_temp = total / temperatures.size();
    std::cout << std::fixed << std::setprecision(2); // output formating
    std::cout << average_temp << std::endl;

    // just pring values

    for (auto val : {1, 2, 3, 4, 5, 6})
        std::cout << val << std::endl;

    // with c style string
    // for(auto c:"This is c++")
    // if(c != ' ')
    // std::cout << c ;
    // std::cout << "\n";

    // with c style string
    for (auto c : "This is c++")
        if (c == ' ')
            std::cout << "\t";
        else
        {

            std::cout << c;
            std::cout << std::endl;
        }
    // count the number exactly divisible by 3 and 5
    std::vector<int> vec{1, 3, 5, 15, 16, 17, 18, 19, 20, 21, 25, 26, 27, 30, 50, 55, 56, 58, 100, 200, 300, 400, 500, 600, 700};
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count{0};
    for (auto num : vec)
    {
        if ((num % 3 == 0) || (num % 5 == 0))
        {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
