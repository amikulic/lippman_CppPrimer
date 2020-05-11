/*
Antonio Mikulic
11.05.2020
amikulic89 [at] gmail.com
*/

/*Exercise 1.11: Write a program that prompts the user for two integers.
Print each number in the range specified by those two integers.*/

#include <iostream>;

int main() {

	int number1, number2;


	std::cout << "Please enter 2 numbers: ";
	std::cin >> number1 >> number2; // Read input for 2 variables: number1 and number2

	// The first problem I encountered is how wo set proper range in number1 is bigger than number2 and vice versa
	// I will use 2 int variables: upper and lower to set boundaries of my range

	int upper;
	int lower;

	// by using  if statements, I will determine the upper and lower boundary of range

	/* MY MISTAKE: I declared number1 = lower, which leads to an error.
	Proper declaration is: upper= number1; */

	//if (number1 > number2) {
	//	number1 = upper;
	//	number2 = lower;
	//}
	//else {
	//	number1 = lower;
	//	number2 = upper;
	//}

	// CORRECTION

	if (number1 > number2)
	{
		upper = number1;
		lower = number2;
	}
	else
	{
		upper = number2;
		lower = number1;

	}


	// folowing to make while statement
	// I need one counter variable

	int counter = lower; // setting counter variable to lower

	while (counter < upper)
	{
		std::cout << counter << std::endl;
		++counter; // I forgot to add ++counter

	}
	
	return 0; // ending program


}
