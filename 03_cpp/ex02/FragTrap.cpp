#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap constructor called" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called for " << name << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap("FragTrap") {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
	std::cout << "FragTrap assignation operator called" << std::endl;
	if (this != &src) {
		this->name = src.name;
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
	std::cout << name << " wants to high five you! :)" << std::endl;
}