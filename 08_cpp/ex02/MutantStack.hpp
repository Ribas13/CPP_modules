#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() {};
		MutantStack(const MutantStack & src) {
			*this = src;
		};
		~MutantStack() {};
		MutantStack &operator=(const MutantStack & src) {
			if (this != &src)
				std::stack<T>::operator=(src);
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin() {
			return this->c.begin();
		};
		iterator end() {
			return this->c.end();
		};
		const_iterator begin() const {
			return this->c.begin();
		};
		const_iterator end() const {
			return this->c.end();
		};
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const MutantStack<T>& mutantStack) {
	for (typename MutantStack<T>::const_iterator it = mutantStack.begin(); it != mutantStack.end(); ++it) {
		os << *it << " ";
	}
	return os;
}

#endif