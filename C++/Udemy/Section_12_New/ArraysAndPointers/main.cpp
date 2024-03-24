#include<iostream>

int main()
{
    int scores[]{100, 95, 89};    
    std::cout << "Value of scores: " << scores <<std::endl;

    int *scoresPtr{scores};
    std::cout << "Value of scoresPtr: " << scores <<std::endl;
    
    std::cout << "Array subscript " << scores <<std::endl;
    std::cout << scores[0] <<std::endl;
    std::cout << scores[1] <<std::endl;
    std::cout << scores[2] <<std::endl;

    std::cout << "Pointer subscript " << scores <<std::endl;
    std::cout << scoresPtr[0] <<std::endl;
    std::cout << scoresPtr[1] <<std::endl;
    std::cout << scoresPtr[2] <<std::endl;

    std::cout << "Pointer offset natation " << scores <<std::endl;
    std::cout << *scoresPtr <<std::endl;                    // address 1000 = 100
    std::cout << *(scoresPtr + 1) <<std::endl;              // address 1000 + 1(sizeof int) = 95
    std::cout << *(scoresPtr + 2) <<std::endl;              // address 1000 + 2(sizeof int) = 89

    std::cout << "Array offset " << scores <<std::endl;
    std::cout << *scores << std::endl;
    std::cout << *(scores +1)  <<std::endl;
    std::cout << *(scores +2) <<std::endl;


    return 0;
}