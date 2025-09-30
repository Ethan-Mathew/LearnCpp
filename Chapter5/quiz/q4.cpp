#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::cout << "Enter the name of person #1: ";
    std::string nameOne;
    std::getline(std::cin >> std::ws, nameOne);

    std::cout << "Enter the age of " << nameOne << ": ";
    int ageOne;
    std::cin >> ageOne;

    std::cout << "Enter the name of person #2: ";
    std::string nameTwo;
    std::getline(std::cin >> std::ws, nameTwo);

    std::cout << "Enter the age of " << nameTwo << ": ";
    int ageTwo;
    std::cin >> ageTwo;

    if (ageOne > ageTwo)
    {
        std::cout << nameOne << " (age " << ageOne << ") is older than " 
                  << nameTwo << " (age " << ageTwo << ").";
    }
    else
    {
        std::cout << nameTwo << " (age " << ageTwo << ") is older than " 
                  << nameOne << " (age " << ageOne << ").";
    }

    return 0;
}