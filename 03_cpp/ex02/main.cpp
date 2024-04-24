#include "FragTrap.hpp"

int	main(void) {
	FragTrap Diogo("Diogo");
	FragTrap Bobby("Bobby");
	FragTrap Ze("Ze");
	
	std::cout << std::endl;
	
	Diogo.attack("Bobby");
	Bobby.takeDamage(Diogo.getAttackDamage());
	std::cout << "Bobby hp: " << Bobby.getHP() << std::endl;
	Bobby.beRepaired(15);
	Bobby.attack("Diogo");
	Diogo.takeDamage(Bobby.getAttackDamage());
	std::cout << "Bobby hp: " << Bobby.getHP() << std::endl;
	std::cout << "Diogo hp: " << Diogo.getHP() << std::endl;
	std::cout << "Bobby energy: " << Bobby.getEnergy() << std::endl;
	std::cout << "Diogo energy: " << Diogo.getEnergy() << std::endl;

	std::cout << std::endl;
	Diogo.highFivesGuys();
	std::cout << std::endl;
	return (0);
}