#include "Cat.h"

#include <iostream>

namespace caveofprogramming {

	void saySomething() {
		std::cout << "Hello there!!!" << std::endl;
	}

	Cat::Cat() {
		// TODO Auto-generated constructor stub
	}

	void Cat::speak() {
		std::cout << "Meeeouwww!!!" << std::endl;
	}

	Cat::~Cat() {
		// TODO Auto-generated destructor stub
	}
}