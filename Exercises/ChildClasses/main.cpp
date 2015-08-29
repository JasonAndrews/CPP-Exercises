/*
 * A very simple program to demonstrate parent and child/derived/sub classes.
 *
 * main.cpp
 *
 *  Created on: 29 Aug 2015
 *      Author: Jason Andrews
 */

#include <iostream>
#include "Vehicle.hpp"
#include "Car.hpp"

int main() {

	//Create a Vehicle object with the specified data.
	Vehicle veh("Yahama", "Zr500", 25.0);
	//Print out the Vehicle objects data.
	veh.printInfo();

	//Create a Car object with the specified data.
	Car nissan("Nissan", "Almera", 45.0, 4);
	//Print out the Car objects data.
	nissan.printInfo();

	//Polymorphism
	//Create Vehicle pointer pointing to a Car object with the given data.
	//We need a pointer to achieve the polymorphic behavior we want.
	//Simply using Vehicle lambo = new Car(...) will slice of the Car portion. This is called SLICING.
	Vehicle* lambo = new Car("Lamborghini", "Gallardo", 100.0, 2);
	//-> refers to 'this' (the 'lambo' object) and seeing as it's a Car object, it will use the printInfo() function from the Car class.
	lambo->printInfo();

}


