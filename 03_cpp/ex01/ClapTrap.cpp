#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap Constructor called" << std::endl;
	this->AttackDamage = 0;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
}

ClapTrap::ClapTrap(const std::string newName) {
	this->_name = newName;
	this->AttackDamage = 0;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	std::cout << "ClapTrap constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src) {
	*this = src;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap assignation operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->HitPoints = other.HitPoints;
		this->AttackDamage = other.AttackDamage;
		this->EnergyPoints = other.EnergyPoints;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	this->EnergyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	HitPoints -= amount;
	this->EnergyPoints -= 1;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " is repaired by " << amount << " hit points!" << std::endl;
	HitPoints += amount;
	this->EnergyPoints -= 1;
}

int	ClapTrap::getHP() {
	return this->HitPoints;
}

int	ClapTrap::getEnergy() {
	// std::cout << "ClapTrap " << _name << " has " << EnergyPoints << " energy points!" << std::endl;
	return this->EnergyPoints;
}

int ClapTrap::getAttackDamage() {
	return this->AttackDamage;
}

void ClapTrap::setAttackDamage(int attackDamage) {
	this->AttackDamage = attackDamage;
}

void ClapTrap::setHP(int hp) {
	this->HitPoints = hp;
}

void ClapTrap::setEnergy(int energy) {
	this->EnergyPoints = energy;
}