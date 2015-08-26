/*
 * Calculator.cpp
 *
 *  Created on: 26 Aug 2015
 *      Author: Jason
 */

/*
 * DESIGN DOCUMENT
 *
 * 1) Get first value.
 * 2) Get operation.
 * 3) Get second value.
 * 4) Calculate result.
 * 5) Print result.
 *
 */

#include <string>
#include <cstdlib>
#include <iostream>

namespace calculator {

	//Check if the user's input is numeric.
	bool isNumeric(std::string valueStr) {
		bool isNumeric = true;
		char ch = ' ';

		//Loop through the string (array of char's.)
		for(unsigned int i = 0; i < valueStr.length(); ++i) {

			//Assign the currently indexed character.
			ch = valueStr[i];

			//Check if it's valid.
			if((ch < '0' || ch > '9') && (ch != '.' && ch != '-')) {
				isNumeric = false;
				break;
			}
		}
		return isNumeric;
	}

	//Get the arithmetic operation the user wants to do.
	char getOperator() {
		char operation = ' ';
		std::string operationStr;

		do {
			//Ask the user what operation they want to do.
			std::cout << "Please enter the operation you wish to do (+, -, *, /): " << std::endl;

			//Take the users choice and store it in a string so we can do some validation.
			std::cin >> operationStr;

			//If the user enters more than just one character, then continue (basically skip the current iteration and re-ask for the input.)
			if(operationStr.length() > 1) continue;

			//The first character of the string will be the operation we want to do (Example: "-", the first character is '-'.)
			operation = operationStr[0];

		} while((operation != '+' && operation != '-' && operation != '*' && operation != '/'));

		return operation;
	}

	//Wait for the user to enter the next value and return it.
	double getNextInput() {

		double value = 0.0;
		std::string valueStr;
		bool validInput = true;

		do {
			std::cout << "\nPlease enter a value: " << std::endl;
			std::cin >> valueStr;

			validInput = isNumeric(valueStr);

			value = std::strtod(valueStr.c_str(), NULL);

			if(!validInput) {
				std::cout << "Please select a numeric value!" << std::endl;
			}

		} while (!validInput);

		return value;
	}

	double add(double value1, double value2) {
		return (value1 + value2);
	}
	double subtract(double value1, double value2) {
		return (value1 - value2);
	}
	double multiply(double value1, double value2) {
		return (value1 * value2);
	}
	double divide(double value1, double value2) {
		return (value1 / value2);
	}
}

int main() {

	double value1 = 0;
	double value2 = 0;
	double result = 0;
	char operation = ' ';

	value1 = calculator::getNextInput();
	operation = calculator::getOperator();
	value2 = calculator::getNextInput();

	switch(operation) {
		case '+' : {
			result = calculator::add(value1, value2);
			break;
		}
		case '-' : {
			result = calculator::subtract(value1, value2);
			break;
		}
		case '*' : {
			result = calculator::multiply(value1, value2);
			break;
		}
		case '/' : {
			if(value2 == 0.0) {
				std::cout << "Cannot divide by zero. Terminating program." << std::endl;
			} else {
				result = calculator::divide(value1, value2);
			}
			break;
		}
		default: {
			std::cout << "An invalid operator has been used. Terminating program." << std::endl;
			break;
		}
	}

	std::cout << "Result of " << value1 << " " << operation << " " << value2 << " is " << result << std::endl;

	return 0;
}






