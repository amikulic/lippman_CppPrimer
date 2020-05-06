
/*
Antonio Mikulic
06.05.2020
amikulic89 [at] gmail.com
*/

/* Exercise 1.5: We wrote the output in one large statement. Rewrite the
program to use a separate statement to print each operand. */


// #include directive must be in the same line as header: <iostream>
#include <iostream>

#include <iostream>
int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;

	// changing the output statement to print each operand in different statement
	std::cout << "The sum of " << v1;
	std::cout<< " and " << v2;
	std::cout<< " is " << v1 + v2 << std::endl;
	
}