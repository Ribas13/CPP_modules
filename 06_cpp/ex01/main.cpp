#include "Serializer.hpp"

int main(void) {
	Data data;
	data.n = 24;
	data.str = "ponho o carro na garagem da vizinha";
	data.d = 24.12;

	std::cout << "---------------\nOriginal:" << std::endl;
	std::cout << "n: " << data.n << "\nstr: " << data.str << "\nd: " << data.d << std::endl;
	uintptr_t raw = Serializer::serialize(&data);

	std::cout << "---------------\nSerialized data:\n";
	std::cout << "n: " << data.n << "\nstr: " << data.str << "\nd: " << data.d << std::endl;

	Data *ptr = Serializer::deserialize(raw);

	if (ptr->n == data.n && ptr->str == data.str && ptr->d == data.d)
		std::cout << "---------------\nSerialization and deserialization were successful!" << std::endl;
	else
		std::cout << "---------------\nSerialization and deserialization failed!" << std::endl;
	return 0;
}
