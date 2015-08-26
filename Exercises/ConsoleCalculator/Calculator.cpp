/*
 * A simple console calculator.
 *
 * Calculator.cpp
 *
 *  Created on: 26 Aug 2015
 *      Author: Jason Andrews
 */


#include <string>
#include <cstdlib>
#include <iostream>

namespace calculator {

	//Check if the user's input is valid (numeric or contains specific special characters.)
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

		//A do-while loop to get the user's input. If their inputed value was invalid, ask them again.
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

	//Wait for the user to enter the next value, validate it and then return it.
	double getNextInput() {

		double value = 0.0;
		std::string valueStr;
		bool validInput = true;

		//A do-while loop to get the user's input for the operation they want to do. If their input value was invalid, ask them again.
		do {
			//Prompt the user for a value.
			std::cout << "\nPlease enter a value: " << std::endl;
			//Store the user's input in a string.
			std::cin >> valueStr;

			//See whether or not the input was valid.
			validInput = isNumeric(valueStr);

			if(validInput) {
				//The user entered in a numeric number.
				value = std::strtod(valueStr.c_str(), NULL);
			} else {
				//They entered an incorrect value (it contained invalid special characters or letters.)
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
	bool printResult = true;

	//Get the first value.
	value1 = calculator::getNextInput();
	//Get the operation character.
	operation = calculator::getOperator();
	//Get the second value.
	value2 = calculator::getNextInput();

	//Switch between the input operation character and do a calculation based on that character.
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
				printResult = false;
			} else {
				result = calculator::divide(value1, value2);
			}
			break;
		}
		default: {
			std::cout << "An invalid operator has been used. Terminating program." << std::endl;
			printResult = false;
			break;
		}
	}

	//Only print the result if no errors occurred.
	if(printResult)
		std::cout << "Result of " << value1 << " " << operation << " " << value2 << " is " << result << std::endl;

	return 0;
}






