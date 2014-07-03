#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	clock_t start = clock();
	double duration = 0;
	
	int a,b,c;
	for(a=1;a<=1000;a++)
		for(b=a+1;b<=1000-a;b++)
		{
			c = 1000-(a+b);
			if(a<b && (a*a + b*b) == c*c)
				cout<<"Product = "<<a*b*c<<endl;
		}
	
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout<<"Duration: "<<duration<<endl;
}