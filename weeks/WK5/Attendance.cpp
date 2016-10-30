//AUTHOR	:	DAN CRISP
//DATE		:	27SEPT2016
//WEEK3
//FILE		:	Attendance.cpp
/* Program Description:
	Create a program that utilizes some function abstraction. MUST: have do-while, AND call a procedure.
	Assume a teacher keeps a log of student attendance.
	Assume your user is the clerk who enters each teacher's attendance sheet.
	Output the total attendance.
	
	use procedure for each teacher, request course, request number of students.
	
	
*/
/*C++ statements to be copied into the program to print real numbers. These statements are:
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	escape sequence:
	"\n" - new line
	"\t" - horizontal tab
	Leaving these legacy notes...
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int getSets();

int Drv ()
{	
	//clear screen
	system("cls");
	
	//instantiate vars
	char* teach = new char[teach];
	int* num = new int[num];
	//can find num teachers using for, or use length(<array>)
	//would prefer to call routine for get input, set array.
	//THEN within main, add elements and display table w/ totals.
	
	//for now. in-class method...
	int totNum(0); totGrand(0);
	int reportNum(0);
	
	//state goal
	cout << "You are a clerk, I'm a program.\n"
		<< "You enter teacher's attendance sheets and I summarize the info.\n\n";
	
	cout << "How many teacher reports have you now?\nPlease enter a plain integer:";
	cin >> reportNums;
	
	
	//loop through procedure calls for inputgets, inputlog, & subtot calcs
	for (int i = 1; i <= reportNums; i++ )
	request teacher
	call Dset
	use Dset's returned subtot
		add to array at index 'teach'
		add subtot to totGrand
		allow user input for exiting Dset
	display output
	
	
	
	return 0;
}

double Dset(int course, int num)
{
	//if key course, in array, has val, use key_comp
	do
	{
		
	} while (userinput > 0)
	
	//return total
	
}