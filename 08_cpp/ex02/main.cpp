#include "MutantStack.hpp"
#include <ctime>
#include <cstdlib>

//TODO add more tests

int main() {
	{
		std::cout << "-----------\nSUBJECT TEST\n" << std::endl;

		MutantStack<int> mstack;

		mstack.push(5); // <-- insert element at the top of the stack
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop(); // <-- remove the first element

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::const_iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << "-----------\nLIST TEST" << std::endl;
		std::cout << "(should be the same output as the subject test)\n" << std::endl;

		std::list<int> mstack;

		mstack.push_back(5); // <-- insert element at the top of the stack
		mstack.push_back(17);

		std::cout << mstack.back() << std::endl;

		mstack.pop_back(); // <-- remove the first element

		std::cout << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		//std::stack<int> s(mstack);
	}
}