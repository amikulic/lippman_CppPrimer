/*
Antonio Mikulic
11.05.2020
amikulic89 [at] gmail.com
*/

//Exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100.

#include <iostream>

int main()
{
	int value = 50, sum = 0;

	while (value <= 51) {
		sum += value; //+= dodaje value varijabli sum
		++value; //povećavamo value za 1
	}

	std::cout << "Sum of number from 50 to 100 is " << sum << std::endl;
	
}