//AUTHOR	:	DAN CRISP
//DATE		:	13OCT2016
//WEEK3
//FILE		:	70407.cpp
/* Prime Numbers
Write a program that reads in an integer that is greater than 2 (let's call it k)
Finds and prints all of the prime numbers between 3 and k.
	A prime number: 1 and itself are the only numbers that evenly divide it
		(for example, 3, 5, 7, 11, 13, 17, ...)

One way to solve this problem is to use a doubly nested loop.
The outer loop can iterate from 3 to k
while the inner loop checks to see if the counter value for the outer loop is prime.
one way to see if number n is prime is to loop from 2 to n-1 and if any of these 
	numbers evenly divides n, then n cannot be prime. if none of the values from 2 
	to n-1 evenly divides !n, then n must be prime. (note that there are several easy 
	ways to make this algorithm more efficient.)
*/

#include <iostream>
#include <cmath>

int get_input(int);
int isprime(int, int);

int main ()
{
	using namespace std;
	int num(0);
	int times(1);
	
	// Clear Console
	system("cls");
	
	// Request Input
	num = get_input(num);
	
	
	// Process. Display primes when found.
	cout << "\nThese numbers are prime:\n3\n";
	for ( int i = 3; i <= num; i++) {
		
		// Verifies if i is a prime number, prints out if it is.
		times = isprime(i, times);
	}
	
	cout << "\nPretty cool, eh? And it only took " << times << " iterations inside function isprime()!\n";
	
	return 0;
}

int get_input(int num)
{
	using namespace std;
	
	do {
		cout << "Please enter an integer greater than 2: \n";
		cin >> num;
	} while (num <= 2);
	
	return num;
}

int isprime(int i, int times)
{
	using namespace std;
	
	for (int k = 2; k < sqrt(i); k++) {
			
			if (i%k==0) {
				// i cannot be prime. set k such that verification loop breaks.
				k = i;
			} else if (k == floor(sqrt(i))) {
				// i is a prime number. print it.
				cout << i << endl;
			}
		times++;
	}
	
	return times;
}