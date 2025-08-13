#include <iostream>
#include <limits>
#include "helper.h"

#define PI 3.14159

std::string changeName();
void showCoolMessage();
void circleCalculator();
void square(int* number);
void convertChar();
void startUpMessage();

int main(){
	std::string name = "Marcus";
	int number = 0;
	bool running = true;
	char input;
	
	std::cout << showName(name) << std::endl;
	std::cout << addition_BITWISE(20,5);
	
	std::cout << "\n-----\n";
	std::cout << "Application App:\n";
	do{
		startUpMessage();
		
		std::cin >> input;
		
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		
		switch(input)
		{
			case '1':
				circleCalculator();
				break;
			case '2':
				showCoolMessage();
				break;
			case '3':
				name = changeName();
				std::cout << showName(name) << '\n';
				break;
			case '4':
				std::cout << "Input a number to square: ";
				std::cin >> number;
				square(&number);
				std::cout << number << '\n';
				break;
			case '5':
				convertChar();
				break;
			default:
				running = false;
				break;
		}
	}while(running);
	
	return 0;
}

std::string changeName()
{
	std::string newName;
	std::cout << "Choose a new name: ";
	std::getline(std::cin, newName);
	return newName;	
}

void showCoolMessage()
{
	std::cout << "This is such a cool message!\n";
}

void circleCalculator()
{
	int radius = 0;
	
	std::cout << "Define a radius for your circle: ";
	std::cin >> radius;
	
	double circumference = (2 * PI) * radius;
	std::cout << "The circumference of your circle is: " << circumference << '\n';
}

void square(int* number)
{
	int d_Num = *number;
	*number = d_Num * d_Num;
}

void convertChar()
{
	std::string input;
	char letter;
	std::cout << "Type a LETTER to convert: ";
	std::cin >> input;
	
	// ERROR HANDLER IF NOT LETTER.
	if(input.empty())
	{
		letter = 'a';
	}
	letter = input.at(0);

	std::cout << "Your letter '" << letter << "' converted to integer in decimal form is: " << (int)letter << '\n';
}

void startUpMessage()
{
	std::cout << "-----\n";
	std::cout << "Type 1 to Calculate a Circle\n";
	std::cout << "Type 2 to Show A Cool Message\n";
	std::cout << "Type 3 to Change Your Name\n";
	std::cout << "Type 4 to Square a Number\n";
	std::cout << "Type 5 to Convert a Character to Integer in Decimal Form\n";
	std::cout << "Type any other character to exit program.\n";
}