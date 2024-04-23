#ifndef CLAPTRAP_H
 #define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int			HitPoints;
		int			EnergyPoints;
		int			AttackDamage;
	public:
		ClapTrap();
		ClapTrap(ClapTrap const &src);
		ClapTrap(const std::string newName);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		//int	getHP(void);
		//int	getEnergy(void);
};

#endif