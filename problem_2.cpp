/*
		Problem 2 - Even Fibonacci numbers:
	Each new term in the Fibonacci sequence is generated by adding the previous 
	two terms. By starting with 1 and 2, the first 10 terms will be:
		1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
	By considering the terms in the Fibonacci sequence whose values do not 
	exceed four million, find the sum of the even-valued terms.
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	clock_t start = clock();
	double duration;
	
	int term = 0, first = 0, second = 1, sum = 0;
	while(term < 4000000)
	{
		term = first + second;
		first = second;
		second = term;
		if(term % 2 == 0)
			sum += term;
	}
	cout<<"Sum = "<<sum<<endl;
	
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout<<"Duration: "<<duration<<endl;
}