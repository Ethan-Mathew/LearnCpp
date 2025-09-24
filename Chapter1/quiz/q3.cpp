#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int first_num;
    std::cin >> first_num;

    std::cout << "Enter another integer: ";
    int second_num;
    std::cin >> second_num;

    std::cout << first_num << " + " << second_num << " is " 
        << (first_num + second_num) << ".\n";

    std::cout << first_num << " - " << second_num << " is " 
        << (first_num - second_num) << ".\n";

    return 0;
}