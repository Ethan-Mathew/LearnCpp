#include <iostream>

constexpr bool isEven(int num)
{
    return (num % 2 == 0) ? true : false;
}

int main()
{
    std::cout << "Enter an integer: ";
    int num;
    std::cin >> num;

    std::cout << num << " is " << (isEven(num) ? "even" : "odd");

    return 0;
}