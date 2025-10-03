#include <iostream>

int main()
{
    int top{5};
    int outer{1};

    while (outer <= 5)
    {
        int spaceCount{1};
        while (spaceCount <= (top - outer))
        {
            std::cout << "  ";
            spaceCount++;
        }

        int inner{outer};
        while (inner >= 1)
        {
            std::cout << inner << " ";
            inner--;
        }

        std::cout << '\n';
        outer++;
    }

    return 0;
}