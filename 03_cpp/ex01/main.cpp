#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap Diogo("Diogo");
	ScavTrap Culhoum("Culhoum");
	std::cout << std::endl;
	Diogo.attack("Culhoum");
	Culhoum.takeDamage(100);
	Culhoum.beRepaired(5);
	std::cout << "Culhoum hp: " << Culhoum.getHP() << std::endl;
	std::cout << "Diogo hp: " << Diogo.getHP() << std::endl;
	std::cout << "Culhoum energy points: " << Culhoum.getEnergy() << std::endl;
	std::cout << "Diogo energy point: " << Diogo.getEnergy() << std::endl;
	Culhoum.takeDamage(5);
	Culhoum.attack("Diogo");
	std::cout << std::endl;
	Diogo.guardGate();
	Culhoum.guardGate();
	std::cout << std::endl;
	return (0);
}