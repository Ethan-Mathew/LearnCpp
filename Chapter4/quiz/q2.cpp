#include <iostream>

int main()
{
    std::cout << "Enter a double value: ";
    double val_1;
    std::cin >> val_1;

    std::cout << "Enter a double value: ";
    double val_2;
    std::cin >> val_2;

    std::cout << "Enter +, -, *, or /: ";
    char op;
    std::cin >> op;

    if (op == '+')
    {
        std::cout << val_1 << " + " << val_2 << " = " << (val_1 + val_2) << '\n';
    }
    else if (op == '-')
    {
        std::cout << val_1 << " - " << val_2 << " = " << (val_1 - val_2) << '\n';
    }
    else if (op == '*')
    {
        std::cout << val_1 << " * " << val_2 << " = " << (val_1 * val_2) << '\n';
    }
    else if (op == '/')
    {
        std::cout << val_1 << " / " << val_2 << " = " << (val_1 / val_2) << '\n';
    }

    return 0;
}

