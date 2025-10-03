#include <iostream>

int sumTo(int n)
{
    int sum{0};

    for (int i{1}; i <= n; ++i)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    constexpr int value{10};

    std::cout << sumTo(value);

    return 0;
}  