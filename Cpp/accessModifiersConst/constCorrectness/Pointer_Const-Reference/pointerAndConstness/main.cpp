/** Way to qualify using const
 * Pointer to constant - data pointed to is constant(can't be changed)
 * Constant pointer -
 * Consant pointer to constants -
 */
#include <iostream>

int main() {
  std::cout << "pointers to const" << std::endl;
  int high{100};
  int low{66};

  // read from right to left <-
  const int* score{&high};  // points to a constant integer
  std::cout << *score << std::endl;

  //*score = 78; // assignment of read-only location ‘* score’
  score = &low;  // change location is ok
  std::cout << *score << std::endl;

  std::cout << "constant pointer" << std::endl;
  int a{90};
  int b{50};

  int* const cptr{&a};  // constant pointer pointing to &a
  std::cout << "*cptr " << *cptr << std::endl;
  std::cout << "cptr " << cptr << std::endl;

  //*ptr = &b; // incorrect

  *cptr = 56;  // ok
  std::cout << "*cptr " << *cptr << std::endl;

  std::cout << "constant pointer to constants " << std::endl;

  const int x{50};
  const int y{90};

  const int* const cptr2{&x};  // constsant pointer pointing to a constant
  // cptr2 = &y; // error: assignment of read-only variable ‘cptr2’
  std::cout << "&x " << &x << std::endl;
  std::cout << "cptr2 " << cptr2 << std::endl;
  std::cout << "*cptr " << *cptr2 << std::endl;
}