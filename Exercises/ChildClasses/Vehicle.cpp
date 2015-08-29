/*
 * Vehicle.cpp
 *
 *  Created on: 29 Aug 2015
 *      Author: Jason
 */
#include <string>
#include "Vehicle.hpp"

Vehicle::Vehicle() {
	//The no argument constructor will initialise the instance members with these values.
	this -> make = "Car";
	this -> model = "Nissan";
	this -> fuel = 5.0;
}

Vehicle::Vehicle(std::string make, std::string model, double fuel) {
	this -> make = make;
	this -> model = model;
	this -> fuel = fuel;
}

std::string Vehicle::getMake() {
	return (this -> make);
}

std::string Vehicle::getModel() {
	return (this -> model);
}

double Vehicle::getFuel() {
	return (this -> fuel);
}
