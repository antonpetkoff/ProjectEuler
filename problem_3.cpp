/*
		Problem 3 - Largest prime factor:
	The prime factors of 13195 are 5, 7, 13 and 29.
	What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
#include <ctime>
using namespace std;

bool isPrime(const __int64 number)
{
	if(!(number % 2))
		return false;
	for(__int64 i = 3; i*i <= number; i += 2)
		if(!(number % i))
			return false;
	return true;
}

int main()
{
	clock_t start = clock();
	double duration;
	
	const __int64 number = 600851475143;
	__int64 max = 0;
	for(__int64 i = 3; i*i <= number; i += 2)
	{
		if(!(number % i))
			if(isPrime(i))
				max = i;
	}
	cout<<"Largest prime factor: "<<max<<endl;
	
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout<<"Duration: "<<duration<<endl;
}

// 13195123		0.457