/*
		Problem 5 - Smallest multiple:
	2520 is the smallest number that can be divided by 
	each of the numbers from 1 to 10 without any remainder.
	What is the smallest positive number that is evenly divisible
	by all of the numbers from 1 to 20?
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	clock_t start = clock();
	double duration = 0;
	
	int i=1;
	while(i++)
	{
		for(int j=20;j>0;j--)
			if(i%j==0 && j==1)
				goto found;
			else if(i%j==0)
				continue;
			else break;
	}
	found:
	cout<<"Answer = "<<i<<endl;
	
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout<<"Duration: "<<duration<<endl;
}