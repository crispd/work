//AUTHOR	:	DAN CRISP
//DATE		:	6SEPT16
//WEEK2
//FILE		:	App2.cpp
/*First in-class practice problem*/
#include <iostream>
using namespace std;
int main ()
{
	int AppleBox;
	double AppleWeight;
	
	cout << "AppleBox, var of type 'int', is in location " << AppleBox << endl;
	cout << "AppleWeight, var of type 'double', is in location " << AppleWeight << endl;
	cout << "\n";
	cout << "\n";
	
	cout << "Please enter the number of apples in said box:\n";
	cin >> AppleBox;
	
	//system("cls");
	cout << "\n";
	cout << "Good, so there's " << AppleBox << " apples in a Box. Now, please enter the average weight of each apple:\n";
	cin >> AppleWeight;
	
	system("cls");
	cout << "\n";
	cout << "Great, this means we're talking about " << (AppleBox * AppleWeight) << " kg of apples!" << endl;
	
	cout << "\n" << "For reference, each apples weight is " << AppleWeight << " and we have " << AppleBox << " apples in the box." << endl;
	
	return 0;
}