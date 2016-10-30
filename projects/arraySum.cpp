
/*
for loop
while or do while

if
if else

define two arrays size[5]
 a function that will read the data from screen
 and read into one of the arrays
 */



#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<vector>


int get_size(int);
//double* get_values(double*);
void get_values(int array[]);
void show_values(int[], int[], int[] );


int main ()
{
	using namespace std;
	system("cls");
	char inp;
	int nums(0), i(0);
	int x[5];
	int y[5];
	int z[5];
	
	
	//cout << "We're going to do term by term vector addition.\n\n"
		//<< "One array will be defined by you, the other will be randomized.\n";
	//nums = get_size(nums);
	//was goig to play with arrays defined with non-constant args.. no time.
	//double* x = new double[nums];
	//double* y = new double[nums];
	
	cout << "We're going to do term by term vector addition.\n\n";

	
	//x = get_values(x);
	//cout << x << endl;
	
	get_values(x);
	get_values(y);
	
	// Sum arrays term by term
	for ( int i=0; i<=sizeof(x); i++)
	{
		z[i]=x[i] + y[i];
	}
	
	// Display
	cout << "vals of all\n";
	show_values(x, y, z);
	
	
	
	return 0;
}

//IGNORE. WAS GOING TO GIVE ME LENGTH OF ARRAY.
int get_size(int val)
{
	using namespace std;
	
	cout << "\nHow long will your array be?\n";
	cin >> val;
	
	while (val<1)
	{
		cout << "Ok, once more. This time, please tell me another number.. ABOVE ZERO!\n";
		cin >> val;
		cout << " you entered: "<< val << "\n\n";
	}
	
	return val;
}


//double* get_values(double* array)
//void get_values(double* array)
void get_values(int array[])
{
	using namespace std;
	
	for ( int i=0; i <= sizeof(array); i++)
	{
		cout << "Please enter the value of element " << i << ".\n";
		cin >> array[i];
		cout << "\n";
	}
}

void show_values(int array1[], int array2[], int array3[])
{
	using namespace std;
		for ( int i=0; i < 5; i++)
	{
		cout << i << "\t" << array1[i] 
			<< "\t" << array2[i] 
			<< "\t" << array3[i] 
			<< "\n";
	}
}