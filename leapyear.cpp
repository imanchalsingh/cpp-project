#include <iostream>

int main()
{

    int inputYear;
    std::cout << "Enter year: ";
    std::cin >> inputYear;
    if ((inputYear % 4 == 0 and inputYear % 100 != 0) || (inputYear % 400 == 0))
    {
        std::cout << "This is a leap year";
    } else
    {
        std::cout << "Not a leap year.";
    }
    
    return 0;
}