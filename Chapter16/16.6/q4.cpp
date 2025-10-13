#include <iostream>
#include <vector>
#include <limits>

template <typename T>
void printArray(const std::vector<T>& arr)
{
    for (std::size_t index{ 0 }; index < arr.size(); ++index)
    {
        std::cout << arr[index] << ' ';
    }

    if (arr.size() > 0)
        std::cout << '\n';
}

template <typename T>
void searchArray(const std::vector<T>& arr, double value)
{
    for (std::size_t index{ 0 }; index < arr.size(); ++index)
    {
        if (arr[index] == value)
        {
            std::cout << "The number " << value << " has index " << index << '\n';
            return;
        }
    }

    std::cout << "The number " << value << " was not found\n";
}

int main()
{
    double input;
    while (true)
    {
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> input;

        if (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        break;
    }

    std::vector arr{ 4.4, 6.6, 7.7, 3.3, 8.8, 2.2, 1.1, 9.9 };

    printArray(arr);
    searchArray(arr, input);

    return 0;
}