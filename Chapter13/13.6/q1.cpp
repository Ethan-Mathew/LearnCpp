#include <iostream>
#include <string_view>

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

using enum Animal;

std::string_view getAnimalName(Animal animal)
{
    switch(animal)
    {
    case pig: return "pig";
    case chicken: return "chicken";
    case goat: return "goat";
    case cat: return "cat";
    case dog: return "dog";
    case duck: return "duck";
    default:
        std::cout << "invalid\n";
        return "invalid";
    }
}

void printNumberOfLegs(Animal animal)
{
    switch(animal)
    {
        case pig:
        case goat:
        case cat:
        case dog:
            std::cout << "A " << getAnimalName(animal) << " has " << 4 << " legs\n";
            return;
        case chicken:
        case duck:
            std::cout << "A " << getAnimalName(animal) << " has " << 2 << " legs\n";
            return;
        default:
            std::cout << "invalid\n";
    }
}

int main()
{
    printNumberOfLegs(cat);
    printNumberOfLegs(chicken);

    return 0;
}