/*
Antonio Mikulic
11.05.2020
amikulic89 [at] gmail.com
*/

/*Exercise 1.10: In addition to the ++ operator that adds 1 to its operand,
there is a decrement operator (--) that subtracts 1. Use the decrement
operator to write a while that prints the numbers from ten down to zero.*/

#include <iostream>

int main()
// I`l be using exercise1.09 as template
{
	int value = 11, sum = 0; // starting with 11 so the first print in output is 10 as the program states: "from ten to zero"
	// while loop
	while (value > 0) {
				--value; // decreasing value for -1
				std::cout << "Using the decrement operator to write number in a while loop. The next number is:" << value << std::endl; // printing numbers

	}

	

}