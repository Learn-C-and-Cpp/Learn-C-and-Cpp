#include <iostream>
using namespace std;

void logical_operators(int age, bool parental_consent, bool ssn, bool accidents)
{

    //----WRITE YOUR CODE BELOW THIS LINE----

    if ((age >= 18 || (age > 15 && parental_consent)) && ssn && !accidents)
    {
        cout << "Yes, you can work.";
    }
    //----WRITE YOUR CODE ABOVE THIS LINE----
    return;
}

int main()
{
    int age{};
    bool parental_consent{false};
    bool ssn{false};
    bool accidents{false};
    
    return 0;
}
/*
-must be 18 older or above (age >=18)
-(age >15 && has_consent) bool
-has_valid_ssn and no driving accidents

variables
int age{};
bool parental_consent{false};
bool ssn{false};
bool accidents{false};


*/