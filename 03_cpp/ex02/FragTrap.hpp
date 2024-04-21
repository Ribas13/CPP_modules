#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
 #define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string _name);
		FragTrap(FragTrap const &src);
		FragTrap& operator=(const FragTrap& src);
		~FragTrap();

		void highFivesGuys(void);
};

#endif