#include <iostream>
class Date {
  int y{};
  int m{};
  int d{};

 public:
  Date() : y{}, m{}, d{} { std::cout << "Constructor " << std::endl; }
  ~Date() {}
  void print() const {  // const member
    std::cout << "Const member" << std::endl;
    std::cout << y << '/' << m << '/' << d << std::endl;
  }
  void print() {  // non-const member
    std::cout << "Non-const member" << std::endl;
    std::cout << y << '/' << m << '/' << d << std::endl;
  }
};

void doSomething(const Date& date) {  // create object by passing an object to
                                      // function by const reference
  date.print();
}

int main() {
  Date today{2020, 10, 14};  // create object
  today.print();

  const Date today2{2020, 10, 14};  // create const object
  today2.print();

  doSomething(today2);

  std::cout << " ----- " << std::endl;
}
