/*
 * ConsoleInput.cpp
 *
 * Take input from the user and then print it out to the console.
 *
 *  Created on: 25 Aug 2015
 *      Author: Jason
 */

#include <string>
#include <iostream>

int main() {

	//Ask the user for their first name.
	std::cout << "Please enter your name: ";

	//Declaring a string object.
	std::string name;

	//Waiting for the user to enter their name.
	std::getline(std::cin, name);

	//Declaring and initializing an integer variable for the age of the user.
	int age = 0;

	//Ask the user for their age.
	std::cout << "Please enter your age: ";

	//Waiting for the user to enter their age.
	std::cin >> age;

	//Printing out the user's first name to the console.
	std::cout << "\nYour name is " << name << "." << std::endl;

	//Printing out the user's age to the console.
	std::cout << "Your age is " << age << "." << std::endl;

	//Return 0 to let the program know it ended successfully.
	return 0;

}



