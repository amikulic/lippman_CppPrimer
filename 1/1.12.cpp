/*
Antonio Mikulic
11.05.2020
amikulic89 [at] gmail.com
*/

/*Exercise 1.12: What does the following for loop do? What is the final value
of sum?

int sum = 0;
for (int i = -100; i <= 100; ++i)
sum += i;*/


//So I`ll break this code line by line:
int sum = 0 // sets the sum variable to 0

// then it goes the for statement:

for (int i = -100; i <= 100; ++i) // set the int i to = -100 and raise the i for +1 until
									// it reaches 100.

//

sum += i; // add the value of to the variable "sum"

CONCLUSION:
this program is summarizing all the numbers from -100 to + 100. 
As it range goes equally from both sides, we can conclude that the final sum would be 0.

I tested with this code:
#include <iostream>;

int main() {

	int sum = 0;
	for (int i = -100; i <= 1100; ++i)
		sum += i; 

	std::cout << sum;
}

// and confirmed.



