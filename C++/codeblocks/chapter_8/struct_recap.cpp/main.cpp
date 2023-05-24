/*struct is used to store more than one variable
  in order to represent an object(bundleling variable or parameters)
  e.g to represent your self you migth need

  -name
  -birthday
  -heihgt
  -weight
  -id

  easy to pass to a function as a group()
  it is also reusable

  -user define aggregate data type (   Employee joe{ };   ) = a data type that groups multiple individual variable together.
  -since struct is user-definde we need to tell the compiler what our struct looks like




*/

#include <iostream>

//We are defining a struct called employee containing 3 member variables/fields inside of it
struct Employee
{
    int id{ };
    int age{ };
    double wage{ };
};

// we are defining a struct person with 6 members/fields
struct Person
{
    std::string myName{ };
    int myBirthYear{ };
    int myBirtMonth{ };
    int myBirthDay{ };
    int myHeightInches{ };
    int myWeightKilos{ };

};

// passing struct to a  fungtions
void printInformation( Employee employee)
{
    std::cout << "Id " << employee.id <<'\n';
    std::cout << "age " << employee.age <<'\n';
    std::cout << "Wage " << employee.wage <<'\n';

}


int main()
{
    //declaring  a variable of type Employee can be many

    Employee joe{ 1,25,20.25};
    Person ek{"keino",1986,9,175,95 };

    // accessing sruct members




    return 0;
}
