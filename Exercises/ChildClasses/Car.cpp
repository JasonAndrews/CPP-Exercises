/*
 * Car.cpp
 *
 *  Created on: 29 Aug 2015
 *      Author: Jason Andrews
 */

#include <string>
#include <iostream>
#include "Vehicle.hpp"
#include "Car.hpp"

//No argument constructor (also calls the parents no argument constructor.)
Car::Car() : Vehicle() {
	this -> numOfDoors = 0;
}

//Constructor that takes in 4 arguments. The first 3 arguments are used to call the parents constructor with the same 3 arguments.
Car::Car(std::string make, std::string model, double fuel, int numOfDoors) : Vehicle(make, model, fuel) {
	std::cout << "Car - " << make << " " << model << " " << fuel << " " << numOfDoors << std::endl;
	this -> numOfDoors = numOfDoors;
}

//Empty destructor.
Car::~Car() {

}

//Get the number of doors the car has.
int Car::getNumOfDoors() {
	return (this -> numOfDoors);
}

//Print out the information about the Car object.
void Car::printInfo() {

	//Access the parents getMake(), getModel() and getFuel() methods and print out the values.
	std::cout <<
			"Car -> Make: " << this -> getMake() << " | Model: " << this -> getModel() << " | Fuel: " << this -> getFuel() << " | Doors: " << numOfDoors << std::endl;
}



