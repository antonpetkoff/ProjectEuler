/*
		Problem 4 - Largest palindrome product:
	A palindromic number reads the same both ways. The largest 
	palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
	Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <ctime>
using namespace std;

bool isPalindrome(int n)
{
	if(n<100000 && n>999999)
		return false;
	static int a=0, b=0, c=0, d=0, e=0, f=0;
	a =	n / 100000;
	b = n / 10000 % 10;
	c = n / 1000 % 10;
	d = n / 100 % 10;
	e = n / 10 % 10;
	f = n % 10;
	if(a==f && b==e && c==d)
		return true;
	else return false;
}

int main()
{
	clock_t start = clock();
	double duration = 0;
	
	int number = 0, max = 0;
	for(int i = 999; i > 99; --i)
		for(int j = 999; j > 99; --j)
		{
			number = i * j;
			if(isPalindrome(number) && number > max)
				max = number;
		}
	cout<<"Largest 6-digit palindrome = "<<max<<endl;
	
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout<<"Duration: "<<duration<<endl;
}