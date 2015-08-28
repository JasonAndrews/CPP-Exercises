/*
 * A very simple program to demonstrate the use of classes in C++.
 *
 * Create two instances of the Animal class and just output their details to the console.
 *
 * Main.cpp
 *
 *  Created on: 28 Aug 2015
 *      Author: Jason Andrews
 */

#include <iostream>
#include "Animal.hpp"

int main() {

	//Create an Animal object using the custom constructor.
	Animal dog("Spotty", "Woof", 5);
	Animal cat("Whiskers", "Meow", 3);

	std::cout << "Dog " << dog.getName() << " is " << dog.getAge() << " years old." << std::endl;
	dog.makeSound();

	std::cout << "Cat " << cat.getName() << " is " << cat.getAge() << " years old." << std::endl;
	cat.makeSound();

	return 1;
}



