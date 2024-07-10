

/* unamed namespaces
 * inline namespaces An inline namespace is a namespace that is typically used to version content
 * normal named namespace
 */

#include <iostream>


//namespace // unamed namespace  all contents treated as ->  internal linkage
//{
//    void doSomething()
//    {
//        std::cout << " unamed namespace\n";
//    }
//
//}
//
//static void printSomethig() // can be accessed only in this file
//{
//    std::cout<< " staic function as an unamespace\n";
//}


// declare normal namespace
namespace v1//namespace v2
{
  void doSomething ()
  {
    std::cout << "normal namespace doSomething v1 \n";
  }

}

// inline namespaces
inline namespace v2 // declare an inline namespace named v1
{
    void doSomething()
    {
        std::cout << "inline namespace  doSomething v2\n";
    }
}

 inline namespace v3
 {
    void doSomething()
    {
        std::cout << "doSomething v" << 1+2 <<'\n';
    }
 }


int main()
{

//    doSomething(); // we can call dosomething without a namespace prefix
    //printSomethig();
    v1::doSomething();//call v1 doSomething
    v2::doSomething();//call v2 doSomething
    v3::doSomething();//call v3 doSomething




    return 0;
}

