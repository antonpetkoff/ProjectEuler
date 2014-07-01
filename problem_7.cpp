/*
		Problem 7 - 10001st prime:
	By listing the first six prime numbers: 2, 3, 5, 7, 11,
	and 13, we can see that the 6th prime is 13.
	What is the 10 001st prime number?
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	clock_t start = clock();
	double duration = 0;
	
	int count = 1, number = 1;
	while(count != 10001)
	{
		number += 2;
		bool isPrime = true;
		for(int j=2; number >= j*j; ++j)
			if(number % j == 0)
			{
				isPrime = false;
				break;
			}
		if(isPrime) ++count;
	}
	cout<<"10 001st prime number: "<<number<<endl;
	
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout<<"Duration: "<<duration<<endl;
}