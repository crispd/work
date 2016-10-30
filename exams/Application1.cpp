//AUTHOR	:	DAN CRISP
//DATE		:	22SEPT2016
//WEEK3
//FILE		:	70405.cpp
/* Ancient Square Root Algorithm
Program inputs an integer for n.
Iterates through the 'babylonian algorithm until result is w/i 1% of previous guess.
Outputs the answer as type double.

Babylonian Algorithm: computes the square root of a number n
request user input for initial guess
set r = n/ guess
set guess = (guess + r )/2
continue to re-set values of r and guess using their newest values
	until one guess is closer than 1% its previous
output the resulting values
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main ()
{	
	system("cls");
	//instantiate some vars
	int x, y(10), z(3);
	
	x = y * z + 3;
	cout << "x is equal to " << x << ".\n\n";
	
	return 0;
}