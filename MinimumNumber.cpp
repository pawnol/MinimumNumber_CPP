/*
Minimum Number
Pawelski
3/13/2022
Please follow the instructions on the activity sheet for what needs
to be completed.
*/

#include <iostream>
#include <cmath>

int main()
{
    int number1, number2, number3, minimum;
    std::cout << "Enter the first number >> ";
    std::cin >> number1;
    std::cout << "Enter the first number >> ";
    std::cin >> number2;
    std::cout << "Enter the first number >> ";
    std::cin >> number3;
    minimum = std::min(std::min(number1, number2), number3);
    std::cout << "The lowest number of the three is " << minimum << ".";
    return 0;
}
