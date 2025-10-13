#include <iostream>
#include <vector>
#include <cassert>
#include <string_view>

int main()
{
    const std::vector divisors {3, 5, 7, 11, 13, 17, 19};
    const std::vector<std::string_view> messages {"fizz", "buzz", "pop", "bang", "jazz", "pow", "boom"};

    constexpr const int maxIterations {150};
    const int numDivisors {static_cast<int>(std::size(divisors))};
    const int numMessages {static_cast<int>(std::size(messages))};

    assert(numDivisors == numMessages && "The two vectors were not equal in length");

    for (int i {}; i < maxIterations; ++i)
    {
        bool divisionAppliedOnce {false};
        
        for (int j {}; j < numDivisors; ++j)
        {
            if (i % divisors[j] == 0)
            {
                std::cout << messages[j];
                divisionAppliedOnce = true;
            }
        }

        if (!divisionAppliedOnce)
        {
            std::cout << i;
        }

        std::cout << '\n';
    }

    return 0;
}