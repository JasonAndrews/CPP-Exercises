/*
 * Animal.hpp
 *
 *  Created on: 27 Aug 2015
 *      Author: Jason Andrews
 */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <string>

class Animal {

private:
	std::string name;
	std::string sound;
	int age;

public:
	Animal();
	Animal(std::string name, std::string sound, int age);
	~Animal();

	std::string getName();
	int getAge();
	void makeSound();

};

#endif /* ANIMAL_HPP_ */
