#include <iostream>
#include <vector>

template <typename T>
void printArray(const std::vector<T>& array)
{
    int length {std::size(array)};

    for (int i {0}; i < length; ++i)
    {
        std::cout << array[i] << " ";
    }
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    printArray(arr); // use function template to print array

    return 0;
}