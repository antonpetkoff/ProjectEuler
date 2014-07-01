/*
		Problem 6 - Sum square difference:
	Find the difference between the sum of the squares of the 
	first one hundred natural numbers and the square of the sum.
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	clock_t start = clock();
	double duration = 0;
	
	int sum = 0, sumOfSquares = 0;
	for(int i=1;i<101;i++)
	{
		sum += i;
		sumOfSquares += i*i;
	}
	cout<< sum*sum <<" - "<<sumOfSquares<<" = "<< sum*sum - sumOfSquares <<endl;
	
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout<<"Duration: "<<duration<<endl;
}