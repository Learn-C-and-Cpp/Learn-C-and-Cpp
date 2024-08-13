/**Return by reference
 *
 */
#include <iostream>

// returning by reference
const std::string& getProgamName()  // return a const reference to s_programName
{
  static const std::string s_programName = {
      "Calculator"};  // has static duration
  return s_programName;
}

// returning temporary by reference
// const int &returnByConstReference()
// {
//     return 5; // const reference to a temporary object
// }

const int& getNetID() {
  static int s_x{0};
  ++s_x;
  return s_x;
}

int main() {
  std::string programeName = getProgamName();
  std::cout << "This program is named " << programeName
            << std::endl;  // by value

  // const reference
  // const int& ref{returnByConstReference()};

  // std::cout << ref << std::endl;

  const int id1{getNetID()};
  const int id2{getNetID()};
  const int id3{getNetID()};

  std::cout << "id1 " << id1 << std::endl;
  std::cout << "id2 " << id2 << std::endl;
  std::cout << "id3 " << id3 << std::endl;

  return 0;
}