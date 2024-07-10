/**Const members and why ? / const function 
 * Const will not modify the internal state of the object
 */
#include <iostream>
#include"person.h"

int main()
{
    Person person;
    person .setFirstName("Joe");
    person.printPerson(person);

    return 0;
}