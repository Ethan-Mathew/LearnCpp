#include <iostream>
#include <vector>
#include <cassert>

namespace AnimalNames
{
    enum Animal
    {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        maxAnimals,
    };

    const std::vector legs{ 2, 4, 4, 4, 2, 0 };
}

int main()
{
    assert(AnimalNames::legs.size() == AnimalNames::maxAnimals);

    std::cout << "An elephant has " << AnimalNames::legs[AnimalNames::elephant] << " legs.\n";

    return 0;
}