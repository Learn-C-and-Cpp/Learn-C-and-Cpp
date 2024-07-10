/**Pointers and references
 * pointers are used to store the address of a variable whereas references are
 * used to create an alias of already existing variable.
 */
#include <math.h>
#include <iostream>

struct Demo {
  int a;
};

// return multible valures using out parameters
void fun(int n, int* square, double* sq_root) {
  *square = n * n;
  *sq_root = sqrt(n);
}

int* retunNumber(int n) {
  std::cout << " -----Heap--------" << std::endl;
  int* heap_ptr = new int(n*2);
  std::cout << "*heal_ptr:  " << *heap_ptr * 2 <<std::endl;

  return heap_ptr;
}

int main() {
  std::cout << "pointers re-initialization allowed" << std::endl;
  int x = 5;
  int y = 6;

  int* p;
  p = &x;
  std::cout << "x:" << x << std::endl;
  std::cout << "p " << p << std::endl;
  std::cout << "*p " << *p << std::endl;
  std::cout << "y " << y << std::endl;
  std::cout << " -------------" << std::endl;

  p = &y;  // pointer re-initialisation allowed

  std::cout << "x:" << x << std::endl;
  std::cout << "p " << p << std::endl;
  std::cout << "*p " << *p << std::endl;
  std::cout << " -------------" << std::endl;

  std::cout << "Reference " << std::endl;
  int& ref = x;  // ok
  std::cout << "ref: " << x << std::endl;
  ref = y;
  std::cout << "ref: " << x << std::endl;
  std::cout << " -------------" << std::endl;

  p = &x;  // re-initialisation
  std::cout << "p = &x: " << *p << std::endl;

  std::cout << " -------------" << std::endl;

  // points to the next location
  int arr[]{5, 4, 3, 2, 1, 0};
  std::cout << "arr[0]: " << arr[0] << std::endl;
  int* arrPtr = arr;
  std::cout << "*arrPtr:  " << *(arrPtr + 0) << std::endl;

  for (int i = 0; i < 6; i++) {
    std::cout << "value at arrptr: " << arrPtr << "\n";
    std::cout << "value at *arrptr:  " << *arrPtr << "\n";
    arrPtr++;
  }

  std::cout << " -----struct object --------" << std::endl;
  Demo d;
  Demo* dptr = &d;  //
  Demo& dref = d;

  dptr->a = 8;
  std::cout << " *dptr:  " << dptr->a << std::endl;
  std::cout << " dref.a:  " << dref.a << std::endl;

  std::cout << "return multible valures  " << std::endl;

  int n{100};
  int sq;
  double sq_root;
  fun(n, &sq, &sq_root);
  std::cout << "sq: " << sq << ",  sq_root: " << sq_root << std::endl;

  std::cout << "returnin a pointer  " << std::endl;
  int heap_number{15};

  int* value = retunNumber(heap_number);
  std::cout << "value:  " << *value <<std::endl;
}
