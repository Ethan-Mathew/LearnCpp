#include <iostream>
#include <vector>
#include <string_view>

int main()
{
    std::vector<std::string_view> names {"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

    std::cout << "Enter a name: ";
    std::string inputtedName;
    std::cin >> inputtedName;

    for (const auto& name : names)
    {
        if (name == inputtedName)
        {
            std::cout << inputtedName << " was found.\n";
            return 0;
        }
    }

    std::cout << inputtedName << " was not found.\n";
    return 1;
}