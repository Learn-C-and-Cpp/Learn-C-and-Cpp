#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec)
{
    //---- WRITE YOUR CODE BELOW THIS LINE----
    size_t index{0}; // loop through a vecto of unsigned integers
    int count{0};

    while (index < vec.size() && vec.at(index) != -99)
    {
        count++;
        index++;
    }

    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}

int main()
{
    std::vector<int> vec{1, 3, 5, 15,-99, 16, 17, 18, 19, 20, 21, 25, 26, 27, 30, 50, 55, 56, 58, 100, 200, 300, 400, 500, 600, 700};
    int count = count_numbers(vec);
    std::cout << count <<std::endl;
    return 0;
}