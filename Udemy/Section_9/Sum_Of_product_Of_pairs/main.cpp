#include <iostream>
#include <vector>

int calculate_pairs(std::vector<int> vec)
{
    //----WRITE YOUR CODE BELOW THIS LINE----

    int result{};
    if (vec.empty()) // check if vector is empty
    {
        result = 0;
    }
        // for(auto val:vec)
        for (size_t i{0}; i < vec.size(); ++i)
        {
            for (size_t j = i + 1; j < vec.size(); ++j)
            {
                // result += vec.at(i) * vec.at(j);
                result = result + vec.at(i) * vec.at(j);
                std::cout << vec.at(i) << "," << vec.at(j) << std::endl;

                // std::cout << i <<std::endl;
            }
        }   

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return result;
}

int main()
{
    std::vector<int> vec{2, 4, 6, 8};

    int sum = calculate_pairs(vec);

    std::cout << sum << std::endl;

    return 0;
}