
/* 22.02.2021
    struct is used to store more than one variable in order to represent an object
  e.g to represent your self you migth need
  -name
  -birthday
  -heihgt
  -weight
  -id

  easy to pass to a function as a group
  it is also reusable

  -user define aggregate data type (   Employee joe{ };   ) = a data type that groups multiple individual variable together.
  -since struct is user-definde we need to tell the compiler what our struct looks like

  -access members using member selection operator( . )

  -passing a struct to a function    = void functinName(StructName variable)(){}
  -returning a struct from a functio = stuctName functionNamer(){}


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
    int myBirthMonth{ };
    int myBirthDate{ };
    int myHeightInches{ };
    int myWeightKilos{ };

};

 // non-static member initilization
 struct Rectangle
 {
    double length{ 1.0 };
    double width{ 4.0 };

 };

 /*passing struct Employee to a function
  *use function variable to access struct members with member access operator( . )
  */

 void printInformation(Employee employee) {
    std::cout << "Printing employee's data\n";
    std::cout << "ID " << employee.id <<'\n';
    std::cout << "Age " << employee.age <<'\n';
    std::cout << "Wage " << employee.wage <<'\n';

 }

 //passing struct Person to a function
 void printPersonData(Person person)
 {
    std::cout << "Printing Perston's data\n";
    std::cout << "my name: " << person.myName << '\n';
    std::cout << "my BirthYear: " << person.myBirthYear <<'\n';
    std::cout << "my BirthMonth: " << person.myBirthMonth <<'\n';
    std::cout << "my BirthDate: " << person.myBirthDate <<'\n';
    std::cout << "my Height: " << person.myHeightInches <<'\n';
    std::cout << "my BirthWeight: " << person.myWeightKilos <<'\n';

 }

 /*function return type is a struct name Person
  * e.g for a normal function (int getPersonDada() this returns an integer type  value)
    and ( Person getPeraonData() this returns a Person  type value )
  */
Person getPersonData()
 {
    //creater struct Person variable
    Person personData{"returnedPerson name", 1999, 1, 14, 175, 80};// inintilizer list

    return personData; // return statement
 }

int main()
{
    //declaring  a variable of type Employee can be many
    // and accessing sruct members

    Employee joe{ };

    joe.id = 1 ; // asigning values to struct joe
    joe.age = 35 ;
    joe.wage = 24.5;
    //declaring frank struct
    Employee frank{ };

    frank.id = 2 ; // asigning values to struct joe
    frank.age = 20 ;
    frank.wage = 25.0;

    // adding wage to frank
    frank.wage +=2.50;

    // joes is now older by 1 year
    ++joe.age;


    int totalAge{ joe.age + frank.age};
    std::cout << " joe + frnk age = " << totalAge <<'\n';
    if(joe.wage > frank.wage)
    {
        std::cout << "Joe makes more than frank\n";
    }
    else if(joe.wage < frank.wage)
    {
        std::cout << "Joe makes less than frank\n";
    }
    else
    {
        std::cout << "Joe frank make the same amount\n";
    }

    //initialization list
    Employee kit{ 3, 20,60000.0};
    std::cout <<"kit wage = " << kit.wage <<'\n';

    //Person ek{ "keino",86,09,17,175,95};
    //std::cout << ek <<'\n';

    // access non-static struct
    Rectangle x{ }; // of length 1.0, width 1.0
    x.length = 2.0;
    std::cout << x.length <<'\n';
    std::cout << x.width <<'\n';

    double area{x.length * x.width };
    std::cout << "Rectangle " << area <<'\n';

    // assigning joe to emma
    Employee emma{ joe };
    std::cout << "emma " << emma.wage <<'\n';


    // passing struct to a function functions
    std::cout << '\n';
    printInformation(joe);

    std::cout << '\n';
    // create person variable
    Person keino{"keino ", 1986, 9, 17, 175, 95 };
    Person personTwo{"elk ", 2000, 1, 14, 150, 56 };

    printPersonData(keino);
    std::cout << '\n';
    printPersonData(personTwo);
    std::cout << '\n';

    /*a call to  printPersonData passing getPersonData() function  which declare an
      variable personData and initialization list i.e,
      Perston personData{"returnedPerson name", 2000, 1, 23, 120, 45};
     */
    printPersonData(getPersonData());


    return 0;
}
