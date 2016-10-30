// Example program
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<fstream>

void get_time(char*);


int main ()
{
	using namespace std;
	
	char* start[5], wait[5], stop[5];
	char inp;
	
	//cout << "AUTHOR:\tDAN CRISP\nDATE:\t25 October, 2016\n"
	//	<< "Chapter 5: Time Program, assignment 70413.\n\n";
	//cout << "This program will ask you to enter times: when you will begin waiting, and how long the wait will be.\n"
	//	<< "Then, it will output the time it will be after having waited.\n\n";

	cout << "Compute completion time from current time and waiting period\n";
	
	do {
	//cout << "Current time:\n";
	//cout << "Enter 24 hour time in the format HH:MM\n";
	//getline(cin, starthr, ':');
	//getline(cin, startmin);
	//cout << "\n\n";
	get_time(start);
	//hr = stoi(hr_s);
    //min = stoi(min_s);
	

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


void get_time(char* start)
{
    using namespace std;
    char timehr, timemin;
    cout << "Enter 24 hour time in the format HH:MM\n";
	getline(cin, timehr, ':');
	getline(cin, timemin);
	cout << "\n\n";
	
	//int hr = stoi(timehr);
    //int min = stoi(timemin);
    strcpy(start, <c-style>timehr);
    strcat(start, ":");
    strcat(start, <c-style>timemin);
    cout << start;
}
    
    