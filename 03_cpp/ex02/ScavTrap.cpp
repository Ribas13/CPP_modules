#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name) {
	std::cout << "ScavTrap constructor called for " << _name << std::endl;
	setHP(100);
	setEnergy(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap("ScavTrap") {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->HitPoints = other.HitPoints;
		this->EnergyPoints = other.EnergyPoints;
		this->AttackDamage = other.AttackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(std::string const& target) {
	if (getHP() && getEnergy()) {
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints -= 1;
	}
	else if (!getHP())
		std::cout << "ScavTrap " << _name << " is dead and can't attack " << target << "." << std::endl;
	else
		std::cout << "ScavTrap " << _name << " doesn't have enough energy points to attack." << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " has entered gate keeper mode." << std::endl;
}