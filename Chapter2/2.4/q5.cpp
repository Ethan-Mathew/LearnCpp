#include <iostream>

int doubleNumber(int num)
{
    return 2 * num;
}

int main()
{
    std::cout << "Enter a number: ";

    int input;
    std::cin >> input;
    
    std::cout << doubleNumber(input) << '\n';

    return 0;
}