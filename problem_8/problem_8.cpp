/*
		Problem 8 - Largest product in a series:
	Find the thirteen adjacent digits in the 1000-digit number
	that have the greatest product. What is the value of this product?
*/

#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;
	char temp;
	int num[1000];
	input.open("input8.txt");
	for(int k = 0; input>>temp; ++k)
		num[k] = temp - '0';
	input.close();

	clock_t start = clock();
	double duration = 0;
	
	int i = 12, product = 1, max = 0;
	while(i < 1000)
	{
		for(int j = 0; j <= 12; ++j)
		{
			if(num[i-j] == 0)
				i += 12 - j;		// move past zeros
			product *= num[i-j];
		}
		if(product > max)
			max = product;
		++i;
		product = 1;
	}
	cout<<"Greatest product of 13 adjacent digits = "<<max<<endl;
	
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout<<"Duration: "<<duration<<endl;
}