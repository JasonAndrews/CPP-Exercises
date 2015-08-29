/*
 * A derived class of the Vehicle class.
 * Car.hpp
 *
 *  Created on: 29 Aug 2015
 *      Author: Jason Andrews
 */

#ifndef CAR_HPP_
#define CAR_HPP_

#include <string>
#include "Vehicle.hpp"

class Car: public Vehicle {

private:
	int numOfDoors;

public:
	Car();
	Car(std::string make, std::string model, double fuel, int numOfDoors);
	~Car();

	int getNumOfDoors();
	virtual void printInfo();
};

#endif /* CAR_HPP_ */
