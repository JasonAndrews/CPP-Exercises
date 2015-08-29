/*
 * Vehicle.cpp
 *
 *  Created on: 29 Aug 2015
 *      Author: Jason Andrews
 */
#include <iostream>
#include <string>
#include "Vehicle.hpp"

//No argument constructor with default values for the instance members.
Vehicle::Vehicle() {
	//The no argument constructor will initialise the instance members with these values.
	this -> make = "Ford";
	this -> model = "G1";
	this -> fuel = 5.0;
}

//Constructor with 3 arguments that will be used to give our Vehicle object some values (the make, model and fuel of the vehicle.)
Vehicle::Vehicle(std::string make, std::string model, double fuel) {
	std::cout << "Veh - " << make << " " << model << " " << fuel << " " << std::endl;
	this -> make = make;
	this -> model = model;
	this -> fuel = fuel;
}

//Empty destructor.
Vehicle::~Vehicle() {

}

//Return the make of the vehicle.
std::string Vehicle::getMake() {
	return (this -> make);
}

//Return the model of the vehicle.
std::string Vehicle::getModel() {
	return (this -> model);
}

//Return the fuel of the vehicle.
double Vehicle::getFuel() {
	return (this -> fuel);
}

//Print out the information about the Vehicle object.
void Vehicle::printInfo() {
	std::cout <<
			"Vehicle -> Make: " << this -> make << " | Model: " << this -> model << " | Fuel: " << this -> fuel << std::endl;
}
