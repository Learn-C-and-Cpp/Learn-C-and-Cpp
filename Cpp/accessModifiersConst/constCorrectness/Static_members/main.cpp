// The working of static data member
#include <iostream>

class A {
 public:
  int a{5};

 public:
  A() { std::cout << "A's constructor called " << std::endl; }
};

class B {
  static A a;  // static object
  //static const int b = 4;
  
 public:
  B() { std::cout << "B's constructor called " << std::endl; }
  static A getA() { return a; }  // static member function
  //static B getB() { return b; };

  //   void print(const B& b) {

  //     std::cout << B::getA();  // << std::endl;
  //   }
  friend std::ostream& operator<<(
      std::ostream& os,
      const B& rhs);  // overload the insertion operator to recognize an ostream
                      // object on the left and a Date on the right.
};

// definition on a
A B::a;  // declared insied class and defined outside

std::ostream& operator<<(std::ostream& os, const A& rhs) {
  // cout << obj_rhs;
  os << rhs.a;
  return os;
}

int main() {
  //   B b;
  A a = B::getA();

  std::cout << "value of a: " << a
            << std::endl;  //"a "<< a <<std::endl;  // << std::endl

  B b1;
  B b2;
  B b3;
}