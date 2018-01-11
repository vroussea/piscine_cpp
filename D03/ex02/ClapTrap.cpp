#include "ClapTrap.hpp"

std::string ClapTrap::intToString(int value) {
    std::ostringstream convert;

    convert << value;

    return convert.str();

}

ClapTrap::ClapTrap(void) : _hitPoints(10), _maxHitPoints(10), _energyPoints(5), _maxEnergyPoints(5),
                           _level(1), _name(ClapTrap::intToString(ClapTrap::_clapTrapNumber)), _meleeDamage(2),
                           _rangedDamage(1), _armor(1){
    srand(time(NULL));
    ClapTrap::_clapTrapNumber++;
    std::cout << "Look at this cute little claptrap." << std::endl;
}

ClapTrap::ClapTrap(unsigned int hitPoints,
                   unsigned int maxHitPoints,
                   unsigned int energyPoints,
                   unsigned int maxEnergyPoints,
                   int level,
                   std::string name,
                   unsigned int meleeDamage,
                   unsigned int rangedDamage,
                   unsigned int armor) : _hitPoints(hitPoints), _maxHitPoints(maxHitPoints),
                                         _energyPoints(energyPoints), _maxEnergyPoints(maxEnergyPoints), _level(level),
                                         _name(name.size() > 0 ? name : "Jack"), _meleeDamage(meleeDamage),
                                         _rangedDamage(rangedDamage), _armor(armor) {
    srand(time(NULL));
    ClapTrap::_clapTrapNumber++;
    std::cout << "ClapTrap Baby !" << std::endl;

}

ClapTrap::ClapTrap(ClapTrap const &src) {
    ClapTrap::_clapTrapNumber++;
    std::cout << "This copied ClapTrap looks just like a real one, nice work !" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "Your ClapTrap just exploded !" << std::endl;
}

void        ClapTrap::takeDamage(unsigned int amount) {
    unsigned int damageAfterShield = amount;

    std::cout << this->_name;

    damageAfterShield = ((int)(damageAfterShield - this->_armor) >= 0 ? damageAfterShield - this->_armor : 0);
    int tooMuchDamageTaken = (int)(this->_hitPoints - damageAfterShield);
    this->_hitPoints = ((int)(this->_hitPoints - damageAfterShield) > 0 ? this->_hitPoints - damageAfterShield : 0);

    if (tooMuchDamageTaken > 0)
        tooMuchDamageTaken = 0;
    std::cout << " took " << damageAfterShield + tooMuchDamageTaken << " points of damage !" << std::endl;
}

void        ClapTrap::beRepaired(unsigned int amount) {
    int difHitsPoints = (int)((this->_maxHitPoints - this->_hitPoints));
    amount = ((int)(this->_hitPoints + amount <= this->_maxHitPoints) ?
              amount : difHitsPoints);
    std::cout << this->_name;
    std::cout << " got repaired of ";
    std::cout << amount << " points of damage !" << std::endl;
    this->_hitPoints = (this->_hitPoints + amount <= this->_maxHitPoints ?
                        this->_hitPoints + amount : this->_maxHitPoints);
}

int         ClapTrap::getHitPoints() const {
    return this->_hitPoints;
}

int         ClapTrap::getMaxHitPoints() const {
    return this->_maxHitPoints;
}

int         ClapTrap::getEnergyPoints() const {
    return this->_energyPoints;
}

int         ClapTrap::getMaxEnergyPoints() const {
    return this->_maxEnergyPoints;
}

int         ClapTrap::getLevel() const{
    return this->_level;
}

std::string ClapTrap::getName() const {
    return this->_name;
}

int         ClapTrap::getMeleeDamage() const {
    return this->_meleeDamage;
}

int         ClapTrap::getRangedDamage() const {
    return this->_rangedDamage;
}

int         ClapTrap::getArmor() const {
    return this->_armor;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
    if (this != &rhs) {

    }

    return *this;
}

std::ostream    &operator<<(std::ostream & o, ClapTrap const & i) {
    o << "CL4P-TP " << i.getName();
    o << ", level " << i.getLevel();
    o << " has " << i.getHitPoints();
    o << "(" << i.getMaxHitPoints();
    o << ") Hit Points left and " << i.getEnergyPoints();
    o << "(" << i.getMaxEnergyPoints();
    o << ") Energy Points left." << std::endl;
    o << "It has " << i.getMeleeDamage();
    o << " melee damage points, " << i.getRangedDamage();
    o << " ranged damage points and " << i.getArmor();
    o << " armor points.";

    return o;
}

int         ClapTrap::_clapTrapNumber = 0;
