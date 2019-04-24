#include <iostream>

using namespace std;

int main() {
	
	int a[10];
	
	for(int i = 0; i < 10; i++)
	{
		a[i] = i + 1;
	}
	
	for(int j = 0; j < 10; j++)
	{
		cout << a[j] << endl;
	}
	
	
	return 0;
}
