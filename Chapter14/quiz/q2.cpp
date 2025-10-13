#include <iostream>

class Fraction
{
public:
    explicit Fraction(int numerator, int denominator)
        : m_numerator {numerator}, m_denominator {denominator}
    {
    }

    Fraction multiply(const Fraction& f2) const
    {
        return Fraction { m_numerator * f2.m_numerator, m_denominator * f2.m_denominator };
    }

    void printFraction() const
    {
        std::cout << m_numerator << '/' << m_denominator << '\n';
    }

private:
    int m_numerator{ 0 };
    int m_denominator{ 1 };
};

Fraction getFraction()
{
    int numerator;
    std::cout << "Enter a value for numerator: ";
    std::cin >> numerator;

    int denominator;
    std::cout << "Enter a value for denominator: ";
    std::cin >> denominator;

    return Fraction {numerator, denominator};
}

int main()
{
    Fraction f1{ getFraction() };
    Fraction f2{ getFraction() };

    std::cout << "Your fractions multiplied together: ";

    (f1.multiply(f2)).printFraction();

    return 0;
}