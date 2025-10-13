#include <vector>
#include <iostream>

int main()
{
    std::cout << "Enter 3 integers: ";
    std::vector<int> numbers(3);
    std::cin >> numbers[0] >> numbers[1] >> numbers[2];

    std::cout << "The sum is: " << numbers[0] + numbers[1] + numbers[2] << '\n';
    std::cout << "The sum is: " << numbers[0] * numbers[1] * numbers[2] << '\n';

    return 0;
}