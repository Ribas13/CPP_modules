#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap joao = ClapTrap("joao");
	ClapTrap Ribas("Ribas");

	Ribas.attack("joao");
	joao.takeDamage(0);
	//std::cout << "hp " << Ribas.getHP() << std::endl;
	Ribas.beRepaired(10);
	//std::cout << "hp " << Ribas.getHP() << std::endl;
	//Ribas.getEnergy();
	return (0);
}