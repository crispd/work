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
	cout << "Application 1:\n";
	int x, y(10), z(3);
	
	x = y * z + 3;
	cout << "When x = y * z + 3:\n\n";
	cout << "\tx is equal to " << x << ".\n\n\n";
	
	cout << "Application 2:\n";
	int numHi(0);
	for (int i=0; i<14; i++)
	{
		cout<< "\tHi\n";
		numHi = i + 1;
	}
	cout << "\n\tBy creating a var 'numHi', and adding this line in for loop:\n";
	cout << "\t\tnumHi = i+1;\t (note that +1 needed as first iteration is i=0)\n";
	cout << "\tI can tell you that the number of His' is " << numHi << ".\n\n";
	
	int f(0);
	if (f) {cout << f << endl;}
	float myFloat;
	cin >> myFloat;
	cout << myFloat;
	//cin >> myFloat >> endl;
	//cout << myFLoat;
	
	return 0;
}