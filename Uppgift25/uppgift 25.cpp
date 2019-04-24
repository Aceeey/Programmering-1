#include <iostream>

using namespace std;

int main() {
	int number[7], sum;
	
	for(int i = 0; i < 7; i++)
	{
	cout << "Please enter a number: ";
	cin >> number[i];
	}
	
	for(int add = 0; add < 7; add++)
	{
		sum = sum + number[add];
	}
	cout << sum << endl;
	
	if(sum > 50)
	{
		cout << "Greater than 50";
	}
	if(sum < 50)
	{
		cout << "Less than 50";
	}
	if(sum == 50)
	{
		cout << "It is 50";
	}
	
	return 0;
}
