#include "FragTrap.hpp"

int	main(void) {
	FragTrap Diogo("Diogo");
	FragTrap Culhoum("Culhoum");
	FragTrap Ze("Ze");
	
	std::cout << std::endl;
	
	Diogo.attack("Culhoum");
	Culhoum.takeDamage(Diogo.getAttackDamage());
	std::cout << "Culhoum hp: " << Culhoum.getHP() << std::endl;
	Culhoum.beRepaired(15);
	Culhoum.attack("Diogo");
	Diogo.takeDamage(Culhoum.getAttackDamage());
	std::cout << "Culhoum hp: " << Culhoum.getHP() << std::endl;
	std::cout << "Diogo hp: " << Diogo.getHP() << std::endl;
	std::cout << "Culhoum energy: " << Culhoum.getEnergy() << std::endl;
	std::cout << "Diogo energy: " << Diogo.getEnergy() << std::endl;

	std::cout << std::endl;
	Diogo.highFivesGuys();
	std::cout << std::endl;
	return (0);
}