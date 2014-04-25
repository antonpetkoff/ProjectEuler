// Project Euler problem 13 solution

#include <iostream>
#include <ctime>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	int numbers[100][50];
	char temp;
	ifstream input;
	input.open("input13.txt", ios::in);
	for(int i = 0; i < 100; ++i)
		for(int j = 0; j < 50; ++j)
		{
			input >> temp;
			numbers[i][j] = temp - '0';
		}
	input.close();
	
	clock_t start = clock();
	double duration = 0;
	
	vector<int> result;
	int sum = 0, remainder = 0;
	for(int col = 49; col >= 0; --col)
	{
		for(int row = 0; row < 100; ++row)
			sum += numbers[row][col];
		sum += remainder;
		remainder = sum / 10;				// calculate remainder for next digit
		result.push_back(sum % 10);
		sum = 0;
	}
	result.push_back(remainder);
	
	cout<<"First 10 digits of large sum: ";
	for(vector<int>::reverse_iterator i = result.rbegin(); i != result.rbegin() + 9; ++i)
		cout<<*i;
	cout<<endl;
	
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout<<"Duration: "<<duration<<endl;
	cin.get();
}
