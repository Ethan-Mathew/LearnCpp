#include <iostream>

struct Fraction
{
    int numerator {0};
    int denominator {1};
};

Fraction readFraction()
{
    std::cout << "Enter a value for the numerator: ";
    int numerator;
    std::cin >> numerator;

    std::cout << "Enter a value for the denominator: ";
    int denominator;
    std::cin >> denominator;

    return {numerator, denominator};
}

Fraction multFractions(const Fraction& fraction1, const Fraction& fraction2)
{
    return {fraction1.numerator * fraction2.numerator, fraction1.denominator * fraction2.denominator};
}

void printFraction(const Fraction& fraction)
{
    std::cout << fraction.numerator << "/" << fraction.denominator;
}

int main()
{
    printFraction(multFractions(readFraction(), readFraction()));
}