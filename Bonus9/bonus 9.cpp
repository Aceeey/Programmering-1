#include <iostream>

using namespace std;

int main() {
	int nummer = 1, n = 1, stop = 1;
	int mellan = 10;
	
	
	for(int x = 1; x <= 10; x++)
	{
		
	while(n <= stop)
	{
		
		while(mellan > stop and mellan <= 10)
		{
			cout << " ";
			mellan--;
		}
		cout << nummer << " ";
		nummer++;
		n++;
	}
	cout << endl;
	nummer = 1;
	n = 1;
	mellan = 10;
	stop++;
	}
	
	return 0;
}
