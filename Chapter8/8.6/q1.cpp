#include <iostream>

int calculate(int x, int y, char op)
{
    switch(op)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '%':
        return x % y;
    default:
        std::cout << "Invalid operator\n";
        return 0;
    }
}

int main()
{
    std::cout << "Enter an integer: ";
    int n;
    std::cin >> n;

    std::cout << "Enter an integer: ";
    int m;
    std::cin >> m;

    std::cout << "Enter an operator: ";
    char opp;
    std::cin >> opp;

    int calculated{ calculate(n, m, opp) };

    std::cout << n << " " << opp << " " << m << " = " << calculated;

    return 0;
}