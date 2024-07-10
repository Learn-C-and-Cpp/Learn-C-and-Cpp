/**Static binding : associating function calls with function definitions
 * Achieve by normal function call, overloading or operator overloading
 *
 */

#include <iostream>
#include <list>

class User
{
  public:
    virtual void getPermissions()
    {
        std::cout << "Users can see limited info " << std::endl;
    }
};
class Superuser : public User
{
    void getPermissions()
    {
        std::cout << "Superusers can see all the limited info " << std::endl;
    }
};

int main()
{
    User u;
    Superuser s;
    std::list<User *> users;

    users.push_back(&u);
    users.push_back(&s);

    for (User *userPtr : users)
    {
        userPtr->getPermissions();
    }

    std::cin.get();
}