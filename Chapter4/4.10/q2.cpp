#include <iostream>

int main()
{
    std::cout << "Enter a number from 0-9: ";
    int num;
    std::cin >> num;
    
    if ( (num == 2) || (num == 3) || (num == 5) || (num == 7) )
    {
        std::cout << "The digit is prime.\n";
    }
    else
    {
        std::cout << "The digit is not prime.\n";
    }

    return 0;
}