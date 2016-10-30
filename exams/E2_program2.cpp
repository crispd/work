//AUTHOR	:	DAN CRISP & DYLAN SIMON
//DATE		:	13OCT2016
//WEEK3
//FILE		:	test2Program2
/* Cyber Tailor
In 3-4 sentences define static vairable.
	A static varialbe is one whose value, once defined, can be called repeatedly throughout the run of the program.
	Unlike a global varialbe, it can only be referenced by the function where it was declared.
in 3-4 sentences define static global variable.
	A static global variable is one which, once defined, can be repeatedly accessed from anywhere within a program throughout it's runtime.

Demonstrate your understanding of static variables by 
	creating a small application that computes the 
	running average of the given values.
*/

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

//GLOBAL VARIABLE (CONSTANT)
const double N(3);

double avgThis(int num1, int num2, int num3)
{
	using namespace std;
	
	double avg = (num1 + num2 + num3) / N;
	
	return avg;
}


int main ()
{
	using namespace std;
	
	// Clear Console
	system("cls");
	
	// Instantiate Variables
	int num1(1), num2(2), num3(3);
	int new_num, count(1);
	double avg;
	char endit;
	
	// Introduction
	cout << "To demonstrate a moving average, we'll start with these numbers: 1, 2, and 3\n\n";
	cout << "Now, with every integer you enter, the moving average for the last 3 numbers will be displayed. \n";
	
	do {
		// Call function to average last 3 numbers
		avg = avgThis(num1, num2, num3);
		
		// Display
		cout << "Numbers: " << num1 << ", " << num2 << ", " << num3 << "\n";
		cout << "Running Avg: " << avg << "\n";

		// Input
		cout << "Enter an integer, a negative will terminate program: ";
		cin >> new_num;
		
		// 'Move' the numbers to average
		if (count%3==1){
			num1 = new_num;
		} else if (count%3==2) {
			num2 = new_num;
		} else if (count%3==0) {
			num3 = new_num;
		}
		
		count++;
	} while (!(new_num < 0));
	
	return 0;
}