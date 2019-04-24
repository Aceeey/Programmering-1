    
#include <iostream>

using namespace std;

int main() {
	int number[10];
	
	for(int i = 0; i < 10; i++)
	{
		cout << "Insert number: ";
		cin >> number[i];
	}
	
	for(int j = 0; j < 10; j++)
	{
		cout << number[j] << endl;
	}
	
	return 0;
}
