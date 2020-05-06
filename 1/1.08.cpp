/*
Antonio Mikulic
06.05.2020
amikulic89 [at] gmail.com
*/

//Exercise 1.7: Compile a program that has incorrectly nested comments.

/*my prediction:
1. yes
2. yes
3. no
4. no*/

#include <iostream>

int main() {

	std::cout << "/*";
	std::cout << "*/";
	

	//std::cout << /* "*/" */;  -- commented to ensure program execution
	//std::cout << /* "*/" /* "/*" */; -- commented to ensure program execution

	return 0;
}

