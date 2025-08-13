#include <iostream> // include iostream to include all the input and output streams
#include <limits> // used for the std::numeric_limits which help us handle potential garbage input by the users.
#include "helper.h" // include the helper header file so we can start implementing code into it.

#define PI 3.14159 // we will define define PI within main.cpp to be 3.14159. 

std::string changeName(); // defining this function to make main() function recognize it within the scope, otherwise error.
void showCoolMessage(); // defining this function to make main() function recognize it within the scope, otherwise error.
void circleCalculator(); // defining this function to make main() function recognize it within the scope, otherwise error.
void square(int* number); // defining this function to make main() function recognize it within the scope, otherwise error. we will also make ourselves pass a pointer to an integer.
void convertChar(); // defining this function to make main() function recognize it within the scope, otherwise error.
void startUpMessage(); // defining this function to make main() function recognize it within the scope, otherwise error.

int main(){ // start of the main function.
	std::string name = "Marcus"; // we will define a string value named "name" and assign it the value of "Marcus".
	int number = 0; // we will define an integer named "number" and assign it the value of 0.
	bool running = true; // we will define a boolean named "running", then assign it the value of true.
	char input; // we will define a character named "input".
	
	std::cout << showName(name) << std::endl; // using the standard character output to display a message in the terminal, we will then call the showName() function and pass in the value of name in this file, which is "Marcus", also we'll go into a new line using std::endlwe will be using the implementation within helper.cpp
	std::cout << addition_BITWISE(20,5); // using the standard character output to display a message in the terminal, we will call the addition_BITWISE() function and pass in the values of 20, 5. 20 being the addend_one, 5 being addend_two
	
	std::cout << "\n-----\n"; // we will output a message in the terminal. we will create lines using '\n' before AND after the series of "-----".
	std::cout << "Application App:\n"; // we will output a message in the terminal saying "Application App: ", we will then create a new line using '\n'
	do{ // do the lines of code below up until "} while (running)" at line 58. we will keep repeating these lines of code until running is set to be false.
		startUpMessage(); // call the startUpMessage() function, after this is finished proceed to next line.
		
		std::cin >> input; // we will take the user's input using std::cin, then we'll store the value of this into the input character.
		
		std::cin.clear(); // clear any error flags at cin.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // skip to the newline up until the maximum number of characters that the input stream can buffer. in short, we will just skip to new line and proceed with the program for no further issues.
		
		switch(input) // using a switch statement to check between different conditions that the input character may be.
		{ // start of switch statement.
			case '1': // when input is of character '1', proceed with the lines of code below.
				circleCalculator(); // we will call the circleCalculator() function.
				break; // we will break the switch statement as to not go through with the other lines of code below.
			case '2': // when input is of character '2', proceed with the lines of code below.
				showCoolMessage(); // we will call the showCoolMessage() function.
				break; // we will break the switch statement as to not go through with the other lines of code below.
			case '3': // when input is of character '3', proceed with the lines of code below.
				name = changeName(); // we will change name into whatever the changeName() function returns.
				std::cout << showName(name) << '\n'; // we will output a message in the terminal using what the return string comes out from the showName() function.
				break; // we will break the switch statement as to not go through with the other lines of code below.
			case '4': // when input is of character '4', proceed with the lines of code below.
				std::cout << "Input a number to square: "; // output a message into the terminal.
				std::cin >> number; // we will get the users input then store in the number integer.
				square(&number); // we will call the square() function and pass in the memory address of number.
				std::cout << number << '\n'; // we will output into the terminal what number is now, then make a new line using '\n'.
				break; // we will break the switch statement as to not go through with the other lines of code below.
			case '5': // when input is of character '5', proceed with the lines of code below.
				convertChar(); // call the convertChar() function.
				break; // we will break the switch statement as to not go through with the other lines of code below.
			default: // when no other condition is met, proceed with the lines of code below.
				running = false; // we will set running to false, ending the do-while loop.
				break; // we will break the switch statement as to not go through with the other lines of code below.
		} // end of switch statement.
	}while(running); // if by the end of the while loop running is still true, we will keep repeating from line 25 until running is set to false.
	
	return 0; // indicates end of the program, we will return 0 to indicate that everything has gone well.
} // end of the main function.

std::string changeName() // start implementing the definitions for changeName().
{ // start of function.
	std::string newName; // create a new string called "newName".
	std::cout << "Choose a new name: "; // we will output a message in the terminal.
	std::getline(std::cin, newName); // using getline(), as the user may input a string with spaces within it, then storing the user's input into "newName".
	return newName;	// we will return newName. which is the string the user inputted in.
} // end of function.

void showCoolMessage()
{ // start of function.
	std::cout << "This is such a cool message!\n"; // display a cool message!
} // end of function.

void circleCalculator() // start implementing the definitions for circleCalculator().
{ // start of function.
	int radius = 0; // create an integer named "radius" and then assigning its value to 0.
	
	std::cout << "Define a radius for your circle: "; // output a message into the terminal.
	std::cin >> radius; // we'll get the user's input then store into the radius variable.
	
	double circumference = (2 * PI) * radius; // we will make a double data type named "circumference", then we'll assign it the value of whatever (2 * PI) * radius is.
	std::cout << "The circumference of your circle is: " << circumference << '\n'; // we will output a messsage into the terminal, then we'll input the circumference measurements, then create a new line.
} // end of function.

void square(int* number) // start implementing the definitions for square(). 
{ // start of function.
	int d_Num = *number; // create an integer named d_Num, then we'll dereference "number" to get its value.
	*number = d_Num * d_Num; // we will influence the value of number by dereferencing it, then assigning it the value of d_Num multiplied by d_Num. 
	// *** NOTE: since we're getting the memory address of the number, we are DIRECTLY influencing the value of it. this is different compared to if the function parameter was passed through value.
} // end of function.

void convertChar() // start implementing the definitions for convertChar().
{ // start of function
	std::string input; // make a string data type and naming it "input".
	char letter; // make a character data type and naming it "letter".
	std::cout << "Type a LETTER to convert: "; // output a message in the terminal.
	std::cin >> input; // we will get the user's input, and store the value into "input".
	
	// ERROR HANDLER IF NOT LETTER.
	if(input.empty()) // if input is empty, meaning that the user has inputted nothing,
	{ // start of the if-conditioon.
		letter = 'a'; // then we'll just assign it to the value of 'a' just so the program doesn't crash.
	} // end of the first if-condition.
	else // ELSE if the first condition is not met (meaning that the function IS NOT empty), we will perform this lines of code instead.
	{ // start of the else condition
		letter = input.at(0); // we will assign letter to whatever the first character of input is. 
	} // end of the else condition.

	std::cout << "Your letter '" << letter << "' converted to integer in decimal form is: " << (int)letter << '\n'; // we will output a message, then display our letter, input message again. 
		// THEN using type conversion, we will convert the letter into an integer. this will input the appropiate ASCII letter-decimal conversion. please refer to "https://www.ascii-code.com/" to see each conversion.
} // end of function

void startUpMessage() // start implementing the definitions for startUpMessage().
{ // start of function.
	std::cout << "-----\n"; // display a series of "----'s" then we'll create a new line at the end using '\n'.
	std::cout << "Type 1 to Calculate a Circle\n"; // display the message shown "Type 1 to calculate..." then we'll create a new line at the end using '\n'.
	std::cout << "Type 2 to Show A Cool Message\n"; // display the message then we'll create a new line at the end using '\n'.
	std::cout << "Type 3 to Change Your Name\n"; // display the message then we'll create a new line at the end using '\n'.
	std::cout << "Type 4 to Square a Number\n"; // display the message then we'll create a new line at the end using '\n'.
	std::cout << "Type 5 to Convert a Character to Integer in Decimal Form\n"; // display the message then we'll create a new line at the end using '\n'.
	std::cout << "Type any other character to exit program.\n"; // display the message then we'll create a new line at the end using '\n'.
} // end of function.