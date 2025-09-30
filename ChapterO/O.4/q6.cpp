#include <iostream>

int main()
{
    std::cout << "Input a number (0 - 255): ";
    int num;
    std::cin >> num;

    for (double divisor{128.0}; divisor >= 1; divisor /= 2)
    {
        if ((num - divisor) >= 0)
        {
            std::cout << "1";
            num -= divisor;
        }
        else
        {
            std::cout << "0";
        }
    }

    return 0;
}