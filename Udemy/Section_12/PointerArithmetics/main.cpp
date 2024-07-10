// Pointer arithmetics

#include <iostream>

int main()
{
    int scores[]{100, 95, 89, 68, -1};
    int *score_ptr{scores};

    // loop till you get a sentinel value -1
    while (*score_ptr != -1)
    {
        std::cout << *score_ptr << std::endl;
        score_ptr++;
    }

    std::cout << "------------------------" << std::endl;
    score_ptr = scores;

    while (*score_ptr != -1)
    {
        std::cout << *score_ptr++ << std::endl;
    }

    std::cout << "------------------------" << std::endl;
    std::string s1{"Frank"};
    std::string s2{"Frank"};
    std::string s3{"James"};

    std::string *p1{&s1};
    std::string *p2{&s2};
    std::string *p3{&s1};
    std::cout << std::boolalpha<< std::endl;

    std::cout << p1 << "==" << p2 <<":"<<(p1 == p2) <<std::endl; // P1 and P2 are pointing to different addresses
    std::cout << p1 << "==" << p3 <<":"<<(p1 == p3) <<std::endl; // P1 and P2 pointing to the same address
    
    std::cout << *p1 << "==" << *p2 <<":"<<(*p1 == *p2) <<std::endl;
    std::cout << *p1 << "==" << *p3 <<":"<<(*p1 == *p3) <<std::endl;
    
    
    p3 = &s3;
    std::cout << *p1 << "==" << *p3 <<":"<<(*p1 == *p3) <<std::endl;
    std::cout << "..........................." << std::endl;

    char name[]{"Frank"};
    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};

    char_ptr1 = &name[0];
    char_ptr2 = &name[3];
    std::cout <<"In the string " <<name<<", "<< *char_ptr2 << " is " <<(char_ptr2 - char_ptr1) << " characters away form " << *char_ptr1 <<std::endl;

    return 0;
}