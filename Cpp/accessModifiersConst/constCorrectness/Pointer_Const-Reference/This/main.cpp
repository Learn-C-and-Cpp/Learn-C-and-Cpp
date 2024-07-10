#include <iostream>

class Student;
void create_report(Student *student);

class Student
{
  public:
    std::string name;
    int age;

    Student(std::string name, int age)
    {
        std::cout << "  this memory address " << this << std::endl;
        this->name = name;
        this->age = age;
    }

    void increase_age()
    {
        this->age = this->age + 1;
    }
    void increase_and_output_age()
    {
        this->increase_age(); // calling a member function
        std::cout << "age " << this->age << std::endl;
    }

    void graduate()
    {
        std::cout << "Congratulations! " << std::endl;
        create_report(this); // passing an address of this
    }

    Student &set_name(std::string name)
    {
        this->name = name;
        return *this;
    }

    Student &set_age(int age)
    {
        this->age = age;
        return *this;
    }
};

void create_report(Student *student)
{
    std::cout << student->name << " " << student->age << std::endl;
}

int main()
{
    Student student_1("Lucas", 20);

    std::cout << "  student_1 memory address " << &student_1 << std::endl;

    student_1.increase_and_output_age();

    student_1.graduate();

    // method chaining
    student_1.set_name("John").set_age(23);
}