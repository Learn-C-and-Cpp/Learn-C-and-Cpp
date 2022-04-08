
/*Enumerated type are good for code documentation and and readability purposes
  e.g, to represent predefined set of states ( representing error code)  avoid magic numbers like this,

  int readFileContents()
  {
   if(!openFile)
    return -1;
    if(!readFile)
    return -2;
    if(!parseFile)
    return -3;

  }

 *standard enum are not type safe
 * enum class in c++11 is strongly typed and strongly scoped
 */

#include <iostream>

enum  class Color
{
    color_red,
    color_blue
};

enum  class Fruit
{
    fruit_banana,
    fruit_apple
};

void printColor(Color color)
{
  switch(color)
  {
    case Color::color_red:
    std::cout << "Red" <<'\n';
    break;

    case Color::color_blue:
    std::cout << "blue" <<'\n';
    break;

  }


}
// file manipulation

int openFile(){}

int readFile(){}

int parseFile(){ }


//use unumerated type to map errors when openig a file
enum class ParseResult
{
    // no use of magic numbers
    success,            //0
    error_openign_file, //1
    error_readian_file, //2
    error_parsing_file  //3
};

// parseRestults to a function
ParseResult readFileContent( )
{
    if(!openFile())
    return ParseResult::error_openign_file;
    if(!readFile())
    return ParseResult::error_readian_file;
    if(!parseFile())
    return ParseResult::error_parsing_file;

    return ParseResult::success;

}

int main()
{
  // this two cannot be compared
   Color color{ Color::color_blue };
   Fruit fruit{ Fruit::fruit_banana };
   printColor(color);

   // input value to test enum
   int errorNumber{ };
   std::cout << "Enter file error number\n";
   std::cin >> errorNumber;


   //test the function return ParseRusult againist the enumerators
    if(readFileContent() == ParseResult::success)
    {
      // todo

    }
    else
    {
     // print error message
    }

   return 0;
}
