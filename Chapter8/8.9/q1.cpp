#include <iostream>

int main()
{
    constexpr int max{20};

    for (int i{0}; i < max; ++i)
    {
        if (i % 2 == 0)
        {
            std::cout << i << '\n';
        }
    }

    return 0;
}