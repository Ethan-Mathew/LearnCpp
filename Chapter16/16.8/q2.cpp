#include <iostream>
#include <vector>
#include <string_view>

template <typename T>
bool isValueInArray(const std::vector<T>& names, std::string_view inputtedName)
{
    for (const auto& name : names)
    {
        if (name == inputtedName)
        {
            std::cout << inputtedName << " was found.\n";
            return true;
        }
    }

    std::cout << inputtedName << " was not found.\n";
    return false;
}

int main()
{
    std::vector<std::string_view> names {"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

    std::cout << "Enter a name: ";
    std::string inputtedName;
    std::cin >> inputtedName;

    isValueInArray(names, inputtedName);

    return 0;
}