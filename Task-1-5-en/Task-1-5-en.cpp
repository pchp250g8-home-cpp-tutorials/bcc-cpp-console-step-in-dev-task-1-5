#include <iostream>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    unsigned int k; // pages per day
    unsigned int n; // pages left to read
    /*Inputting variable values ​​from the keyboard*/
    std::cout << "How many pages will you read per day? ";
    // Converting the input string to an integer
    std::cin >> k; // pages per day
    std::cout << "How many pages are left to read? ";
    std::cin >> n; // pages left to read
    unsigned int d = (n + k - 1) / k; // Number of days the book will last
    // -- Displaying information on the screen --
    std::cout << "This book will last you another " << d << " day(s).\r\n";
    // -- Pausing screen output until the "Enter" key is pressed
    std::cin.ignore(); // Clearing the input buffer
    std::cin.get(); // Reading a character from the keyboard
    return 0; // Exiting the program (function)
}
