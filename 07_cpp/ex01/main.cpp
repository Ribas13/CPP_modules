#include "iter.hpp"

/* template <typename T>
void print(T var) {
	std::cout << var << std::endl;
}

int main() {
	int int_arr[] = {1, 2, 3, 4, 5};
	char char_arr[] = {'a', 'b', 'c', 'd', 'e'};
	std::string str_arr[] = {"ola", "o", "meu", "nome", "e diogo"};

	std::cout << "INT ARR" << std::endl;
	iter(int_arr, 5, print);
	std::cout << "--------------\nCHAR ARR:" << std::endl;
	iter(char_arr, 5, print);
	std::cout << "--------------\nSTRING ARR:" << std::endl;
	iter(str_arr, 5, print);
	std::cout << "\n\nTest over" << std::endl;
	return 0;
} */

//evaluation test
class Awesome {
	public:
		Awesome( void ) : _n(42) { return ;}
		int get( void ) const { return this->_n;}
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const &rhs ) {
	o << rhs.get();
	return o;
}

template< typename T >
void print( T& x ) {
	std::cout << x << std::endl;
	return ;
}

int main() {
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab, 5, print<const int> );
	iter(tab2, 5, print<Awesome> );

	return 0;
}