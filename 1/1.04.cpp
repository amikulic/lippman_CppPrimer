
/*
Antonio Mikulic
06.05.2020
amikulic89 [at] gmail.com
*/

/* Exercise 1.4: Our program used the addition operator, +, to add two
numbers.Write a program that uses the multiplication operator, *, to print
the product instead. */


// #include directive must be in the same line as header: <iostream>
#include <iostream>

#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;

	// changing operator from + to to get product of 2 numbers
	std::cout << "The product of " << v1 << " and " << v2
		<< " is " << v1 * v2 << std::endl;
	return 0;
}