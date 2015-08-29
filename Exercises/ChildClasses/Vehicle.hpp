/*
 * A parent class.
 *
 * Vehicle.hpp
 *
 *  Created on: 29 Aug 2015
 *      Author: Jason Andrews
 */

#ifndef VEHICLE_HPP_
#define VEHICLE_HPP_

#include <string>

class Vehicle {

private:
	std::string make;
	std::string model;
	double fuel;

public:
	Vehicle();
	Vehicle(std::string make, std::string model, double fuel);
	virtual ~Vehicle();

	std::string getMake();
	std::string getModel();
	double getFuel();

	virtual void printInfo();
};



#endif /* VEHICLE_HPP_ */
