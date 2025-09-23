#include <iostream>

// Enter three numbers and print them as a sentence
int main()
{
    int x, y, z;

    std::cout << "Enter three numbers: ";
    
    std::cin >> x >> y >> z;

    std::cout << "You entered " << x << ", " << y << ", and " << z << "." << std::endl;


    return 0;
}