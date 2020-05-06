
/*
Antonio Mikulic
06.05.2020
amikulic89 [at] gmail.com
*/

/* Exercise 1.6: Explain whether the following program fragment is legal.
std::cout << "The sum of " << v1;
<< " and " << v2;
<< " is " << v1 + v2 << std::endl; */


//ANSWER

/*
No, it`s not legal.
as we can see, code uses:
*/
std::cout << "The sum of " << v1;
<< " and " << v2; //NOT LEGIT
<< " is " << v1 + v2 << std::endl; // NOT LEGIT

// because << is a part of std library, it should be used as: std::cout.

