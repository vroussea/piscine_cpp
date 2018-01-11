#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {

}

ClapTrap::ClapTrap() {

}

ClapTrap::ClapTrap(ClapTrap const &src) {
    *this = src;
}

ClapTrap::~ClapTrap(void) {

}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
    if (this != &rhs) {

    }

    return *this;
}

std::ostream &ClapTrap::operator<<(std::ostream &o, ClapTrap const &i) {
    o << "The value of  is : ";

    return o;
}
