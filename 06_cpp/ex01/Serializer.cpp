#include "Serializer.hpp"
//#include <cstdint>
#include <sys/types.h>

Serializer::Serializer() {
	std::cout << "Serializer constructor called" << std::endl;
}

Serializer::Serializer(Serializer const &src) {
	std::cout << "Serializer copy constructor called" << std::endl;
	*this = src;
}

Serializer &Serializer::operator=(Serializer const &src) {
	std::cout << "Serializer assignment operator called" << std::endl;
	(void)src;
	return *this;
}

Serializer::~Serializer() {
	std::cout << "Serializer destructor called" << std::endl;
}

// reinterpret cast is the type of cast used to convert a pointer type to another
// even if the types are not related
Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

uintptr_t Serializer::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}
