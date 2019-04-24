#include <iostream>

using namespace std;

int main() {
	int a[5], b[5], c = 0;
	
	a[0] = 1;
	a[1] = 5;
    a[2] = 1;
	a[3] = 5;
	a[4] = 1;
	
	for(int i = 0; i < 5; i++)
	{
		cout << "Insert a number: ";
		cin >> b[i];
	}
	
	for(int count = 0; count < 5; count++)
	{
		if(b[count] == a[count])
		{
			cout << "Rätt!" << endl;
			c++;
		} else {
			cout << "Fel!" << endl;
		}
	}
	
	if(c == 5)
	{
		cout << "Du vann!";
	}
	
	return 0;
}
