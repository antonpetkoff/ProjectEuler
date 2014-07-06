/*
		Problem 10 - Summation of primes:
	The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
	Find the sum of all the primes below two million.
*/

#include <iostream>
#include <ctime>
using namespace std;

typedef unsigned long long ULLInt;

bool isPrime(const ULLInt &number)
{
	if(number % 2 == 0)
		return false;
	for(int i = 3; i*i <= number; i += 2)
		if(number % i == 0)
			return false;
	return true;
}

int main()
{
	clock_t start = clock();
	double duration = 0;
	
	ULLInt sum=2, i=1;
	while((i < 2000000) && (i += 2))
		if(isPrime(i))	sum += i;
	cout<<"Sum = "<<sum<<endl;
	
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout<<"Duration: "<<duration<<endl;
}