/* for(initialization; condition; increment)
    statement(s);
*/
#include <iostream>
#include <vector>

int main()
{
    // for (int i{1}; i <= 100; ++i)
    // {
    //     std::cout << i<< ((i % 10 == 0) ? "\n" : "");

    // }

    std::vector<int> nums{10, 20, 30, 40, 50};

    nums.push_back(60);
    std::cout << "Enter value to Push_back " << std::endl;
    int value{};
    std::cin >> value;
    nums.push_back(value);

    int sum{};

    for (unsigned i = 0; i < nums.size(); ++i)
    {
        if(i%2 !=0)
        sum += nums[i];
    }
    std::cout << "sum: " << sum << std::endl;

    return 0;
}