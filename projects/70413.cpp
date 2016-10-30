//AUTHOR:	Dan Crisp
//DATE:		26OCT2016
//FILE:		70413
/* Readin and writing data from a text file. */
/* 5.2: Time
Requests current time and a waiting time as two integers
	int hours, int minutes
Format time variable using 24-hour notation

Output what the time will be after waiting time
contain a loop so user can repeat until he/she wants to terminate
*/

#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include<cmath>

/*
void int get_time();

void int get_time(int& time)
{
	using namespace std;
	cout << "Enter 24 hour time in the format HH:MM\n";
	cin >> time;
	
	
}
*/


int main ()
{
	using namespace std;
	
	int start(0), wait(0), stop(0);
	int inp(0)
	
	//cout << "AUTHOR:\tDAN CRISP\nDATE:\t25 October, 2016\n"
	//	<< "Chapter 5: Time Program, assignment 70413.\n\n";
	//cout << "This program will ask you to enter times: when you will begin waiting, and how long the wait will be.\n"
	//	<< "Then, it will output the time it will be after having waited.\n\n";

	cout << "Compute completion time from current time and waiting period\n";
	
	do {
	cout << "Current time:\n";
	cout << "Enter 24 hour time in the format HH:MM\n";
	cin >> start;
	cout << "\n\n";

	cout << "Waiting time:\n"
		<< "Enter 24 hour time in the format HH:MM\n";
	cin >> wait;
	cout << "\n\n";
	
	cout << "Completion time in 24 hour format:\n"
		<< stop << "\n\n";
	
	
	// Continuation Prompt
	cout << "Please type either 'y' or 'Y', entering anything else exits program\n";
	cin >> inp;
	cout << "\n\n\n";
	
	} while ((inp == 'y')||(inp == 'Y'));

	return 0;
}