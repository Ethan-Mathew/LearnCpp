#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
    std::bitset<4> tempBits {bits};
    int bitsCount {static_cast<int>(bits.count())};

    bits <<= 1;

    if (bits.count() < bitsCount)
    {
        bits |= 0b0001;
    }

    return bits;
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}