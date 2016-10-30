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
	//instantiate some vars. others initiated once user input is available for determining their length.
	double n, guess(0.0), guessNew, r, diff;
	
	cout << "I'm the magician of square roots! Within me rests an old babylonian skill passed down for millennia. Give me a number and... bim-bam-spoof! I'll tastefully regurgitate your answer.\n\n";
	cout << "Now please, my skills put me in high demand, quickly tell me what number it is you'll be wanting the square root of:\n";
	cin >> n;
	
	
	
	cout << "\nGreat! So I\'ll only be a second...";
	
	guess = n/3.1;
	
	cout << "\n\n  ...I know the root of " << n << " is not " << guess << "..\n\n";
	
	do
	{
		r = n / guess;
		guessNew = (guess + r)/2;
		diff = 100*(guess - guessNew)/guess;
		guess = guessNew;
		//placed cout to monitor algorithm process
		//cout << "guess:\t" << guess << "\tdiff:\t" << diff << endl;
	} while (abs(diff)>=1);
	cout.precision(2);

	
	cout << "\nBI.. BIM.... \tBIM-BAM..\n\t\t\t\tBIM-BAM-SPOOF-EROO!  " << guess << " is your answer!!?\n\n";
	cout << "The Square Root, good sir, of this fantastic number, " << n << ", which you've given me today is " << guess << ".\n\n";
	
	return 0;
}