#include <iostream>
#include <windows.h>

// Color Codes
#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BOLDBLACK   "\033[1m\033[30m"
#define BOLDRED     "\033[1m\033[31m"
#define BOLDGREEN   "\033[1m\033[32m"
#define BOLDYELLOW  "\033[1m\033[33m"
#define BOLDBLUE    "\033[1m\033[34m"
#define BOLDMAGENTA "\033[1m\033[35m"
#define BOLDCYAN    "\033[1m\033[36m"
#define BOLDWHITE   "\033[1m\033[37m"
// Color Codes

int main()
{
    // Print line in all one color
    std::cout << YELLOW << "Hello World!" RESET << std::endl;
    
    // Print line in more than one color
    std::cout << BLUE << "Hello " << RESET << GREEN << "World!" << RESET << std::endl;
  
    // Print line but doesn't use RESET so all the text after is the same color until you reset it
    std::cout << MAGENTA << "If you don't use reset" << std::endl;
    std::cout << "all the text after it will be that color until" << RESET << BOLDCYAN << " you reset it" << RESET << std::endl;;
    Sleep(5000);
}
