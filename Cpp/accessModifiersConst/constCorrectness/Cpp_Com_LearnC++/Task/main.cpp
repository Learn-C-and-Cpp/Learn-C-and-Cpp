//https://cplusplus.com/forum/beginner/173112/
#include <iostream>
#include <string>
using namespace std;

class Module
{
public:
    void setObj(string, string, string, int);               // mutator
    void getObj(string &, string &, string &, int &) const; // accessor
    void print() const;

    Module(); // default constructor
    Module(string, string, string, int);

private:
    string moduleName;
    string moduleCode;
    string lecturer;
    int nrStudent;
};

void print(Module& module);
void fill(Module& module);

int main()
{
    Module moduleOne;
    print(moduleOne);
    fill(moduleOne);
    print(moduleOne);

    return 0;
}

void print(Module modOne)
{

    cout << "Module Information " << endl;
    modOne.print();
    cout << endl;
}

void fill(Module modOne)
{

    string one, two, three;
    int four;
    cout << "Enter Module name" << endl;
    getline(cin, one, '\n');
    cout << "Enter Module code" << endl;
    getline(cin, two, '\n');
    cout << "Enter Lecturer" << endl;
    getline(cin, three, '\n');
    ;
    cout << "Enter Student Number" << endl;
    cin >> four;

    modOne.setObj(one, two, three, four);
    cout << endl;
}

Module::Module()
{

    moduleName = "Cpp";
    moduleCode = "CPP24";
    lecturer = "c7";
    nrStudent= 1234;
}

Module::Module(string one, string two, string three, int four)
{
    setObj(one, two, three, four);
}
void Module::setObj(string one, string two, string three, int four)
{
    moduleName = one;
    moduleCode = two;
    lecturer = three;
    nrStudent = four;
}

void Module::getObj(string &one, string &two, string &three, int &four) const
{
    one = moduleName;
    two = moduleCode;
    three = lecturer;
    four = nrStudent;
}

void Module::print() const
{

    cout << "Module name is :";
    cout << moduleName << endl;

    cout << "Module code :";
    cout << moduleCode << endl;

    cout << "Lecturer :";
    cout << lecturer << endl;

    cout << "Number of students :";
    cout << nrStudent << endl;
}