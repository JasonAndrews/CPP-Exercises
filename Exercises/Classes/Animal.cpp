/*
 * A simple example of the use of classes in C++.
 *
 * Animal.cpp
 *
 *  Created on: 27 Aug 2015
 *      Author: Jason
 */

#include <string>
#include <iostream>
#include "Animal.hpp";

//No arguments constructor.
Animal::Animal(){
	this -> name = "Spotty";
	this -> age = 5;
	this -> sound = "Woof";
}

//Constructor that takes in the name, sound and age of the animal.
Animal::Animal(std::string name, std::string sound, int age) {
	this -> name = name;
	this -> sound = sound;
	this -> age = age;
}

//Destructor.
Animal::~Animal() {
	//Empty destructor.
}

//Return the name of the animal.
std::string Animal::getName() {
	return this -> name;
}

//Return the age of the animal.
int Animal::getAge() {
	return this -> age;
}

//Print out the sound of the animal to the console.
void Animal::makeSound() {
	std::cout << this -> sound << std::endl;
	return;
}



