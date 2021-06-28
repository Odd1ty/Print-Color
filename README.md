# Print-Color
Print text into a C++ Console using cout and terminal codes to type in color.

## Defining the colors
```
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
```

## How to print text in color
```
std::cout << BLUE << "Hello World!" << RESET << std::endl;
```
If you don't use RESET the color will remain changed until the next time you use a color code.

## How to print different colors in one line
```
std::cout << BLUE << "Hello " << RESET << GREEN << "World!" << RESET << std::endl;
```
