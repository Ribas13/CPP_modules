#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap Diogo("Diogo");
	ScavTrap Bobby("Bobby");
	std::cout << std::endl;
	Diogo.attack("Bobby");
	Bobby.takeDamage(100);
	Bobby.beRepaired(5);
	std::cout << "Bobby hp: " << Bobby.getHP() << std::endl;
	std::cout << "Diogo hp: " << Diogo.getHP() << std::endl;
	std::cout << "Bobby energy points: " << Bobby.getEnergy() << std::endl;
	std::cout << "Diogo energy point: " << Diogo.getEnergy() << std::endl;
	Bobby.takeDamage(5);
	Bobby.attack("Diogo");
	std::cout << std::endl;
	Diogo.guardGate();
	Bobby.guardGate();
	std::cout << std::endl;
	return (0);
}