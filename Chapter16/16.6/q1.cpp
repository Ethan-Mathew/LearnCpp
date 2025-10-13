#include <iostream>
#include <vector>

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    int length{std::size(arr)};

    for (int i {0}; i < length; ++i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}