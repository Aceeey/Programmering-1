#include <iostream>

using namespace std;

int main() {
	int nummer[5], is_same;
	
	for(int nummer2 = 0; nummer2 < 5; nummer2++)
	{
	cout << "Skriv in ett nummer: ";
	cin >> nummer[nummer2];
	}
	
	for(int i = 0; i < 5; i++)
	{
		for(int test = 0; test < 5; test++)
		{
			if(nummer[i] == nummer[test] and i != test)
			{
			is_same = true;
			
			} else {
				
			is_same = false;
			}
			
			if(is_same == true)
			{
			cout << nummer[i] << " Det är samma " << endl;
			}
		}
	}
	
	return 0;
}
