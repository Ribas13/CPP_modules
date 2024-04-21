#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string _name) : ClapTrap(_name) {
	std::cout << "FragTrap constructor called for " << _name << std::endl;
	setHP(100);
	setEnergy(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap("FragTrap") {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
	std::cout << "FragTrap assignation operator called" << std::endl;
	if (this != &src) {
		this->_name = src._name;
		this->AttackDamage = src.AttackDamage;
		this->HitPoints = src.HitPoints;
		this->EnergyPoints = src.EnergyPoints;
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << _name << " wants to high five you! :)" << std::endl;
}