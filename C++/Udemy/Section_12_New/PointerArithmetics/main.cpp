// Pointer arithmetic

#include<iostream>
#include<sstream>
void swapPointers(int *ptr1, int *ptr2) // 5, 10
{
    
    std::cout << "ptr1  "<< *ptr1 <<std::endl;
    std::cout << "ptr2  "<< *ptr2 <<std::endl;
    
    *ptr1 = (*ptr1 + *ptr2); //5+10
    *ptr2 = (*ptr1 - *ptr2); //15-10
    *ptr1 = (*ptr1 - *ptr2);

    
    std::cout << " "<<std::endl;
    
    std::cout << "ptr1  "<< *ptr1 <<std::endl;
    std::cout << "ptr2  "<< *ptr2 <<std::endl;
    

    
    
}

int main()
{
    int scores[]{100,95,89,68,-1}; //Declare and initialize score array 
    int *scorePtr{scores}; // assing scores to scorePtr

    while (*scorePtr != -1) // stop -1 in encountered
    {
        std::cout << *scorePtr << std::endl;
        scorePtr++; 
    }

    std::cout << "---------------------"<< std::endl;

    scorePtr = scores;
    while (*scorePtr != -1)
    {
        std::cout << *scorePtr++ << std::endl;
    }
    
     std::cout << "---------------------"<< std::endl;

     std::string s1{"Frank"};
     std::string s2{"Frank"};
     std::string s3{"James"};

     std::string *p1{&s1};
     std::string *p2{&s2};
     std::string *p3{&s1};

     //std::cout <<boolalpha; // Pring True/False
     std::cout << p1<< "=="<<p2<<" : "<<(p1==p2)<<std::endl;
     std::cout << p1<< "=="<<p3<<" : "<<(p1==p3)<<std::endl;

     std::cout << *p1<< "=="<<*p2<<" : "<<(*p1==*p2)<<std::endl;
     std::cout << *p1<< "=="<<*p3<<" : "<<(*p1==*p3)<<std::endl;

    p3 = &s3;
    std::cout << *p1<< "=="<<*p3<<" : "<<(*p1==*p3)<<std::endl;


    std::cout << "---------C style string---------"<< std::endl;
    char name[]{"Frank"};
    char *charPtr1{nullptr};
    char *charPtr2{nullptr};

    charPtr1 = &name[0]; //F
    charPtr2 = &name[3]; //n

    std::cout << "In the string "<<name<<", "<<*charPtr2 <<" is " <<charPtr2 - charPtr1 << " characters away from " <<*charPtr1 <<std::endl;



  // swap numbers using pointers
  std::cout <<"" << std::endl;

  std::cout << "swap numbers using pointers "<< std::endl;
  int a{5};
  int b{10};

  int *ptrA{&a};
  int *ptrB{&b};

  swapPointers(ptrA, ptrB);   




    


    return 0;
}