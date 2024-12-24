#include <iostream>

int main()
{
    double baseOfTriangle;
    double hightOfTriangle;
    std::cout << "Enter base: ";
    std::cin >> baseOfTriangle;
    std::cout << "Enter hight: ";
    std::cin >> hightOfTriangle;
    double result = (baseOfTriangle * hightOfTriangle) / 2;
    std::cout << "Area is: " << result << std::endl;
    

    return 0;
}