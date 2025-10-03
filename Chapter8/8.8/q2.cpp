#include <iostream>

int main()
{
    char letter{'a'};
    int numLetters{26 + static_cast<int>(letter)};

    while (static_cast<int>(letter) < numLetters)
    {
        std::cout << letter << " " << static_cast<int>(letter) << '\n';

        letter++;
    }

    return 0;
}