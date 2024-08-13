/**Return by reference
 *
 */
#include <iostream>

const int& getName(const int& s) {
  //++s;
  return s;
}

int main() {
  int s1{5};
  const int& s2 = getName(s1);
  std::cout << s1 << std::endl;
  std::cout << s2 << std::endl;

  std::cout << &s1 << std::endl;
  std::cout << &s2 << std::endl;
  return 0;
}