#include <iostream>
#include <cmath>
#include "Fixed.hpp"
#include <bitset>

int main( void ) {
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    std::cout << std::bitset<32>(roundf(-2.5f * (1 << 8))) << std::endl;
    return 0;
}