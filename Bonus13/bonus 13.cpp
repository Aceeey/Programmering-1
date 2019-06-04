#include <iostream>

using namespace std;

int main() {
	int array[10], anvandare, up, mer = 0, mindre = 0, samma = 0, mer2, mindre2, lika;
	
	for(int i = 0; i < 10; i++)
	{
		cout << "Skriv in ett nummer: ";
		cin >> anvandare;
		array[i] = anvandare;
	}
	
	for(int n = 0; n < 10; n++)
	{
		up = n + 1;
		
		if(array[up] > array[n])
		{
			mer = true;
		} else if(array[up] < array[n]) {
			mindre = true;
		} else {
			samma = true;
		}
		
		if(mer == true)
		{
			mer++;
		} else if(mindre2 == true) {
			mindre++;
		} else {
			lika++;
		}
		
		mer2 = false;
		mindre2 = false;
		lika = false;
	}
	
	if(mer > 0)
	{
		mer2 = true;
	}
	if(mindre > 0)
	{
		mindre2 = true;
	}
	if(lika > 0)
	{
		samma = true;
	}
	
	
	if(mer2 == true and mindre2 == true)
	{
		cout << "Ökar och Sjunker";
	} else if(mer2 == true and mindre2 == false) {
		cout << "Endast ökande";
		
	} else if(mer2 == false and mindre2 == true) {
		cout << "Endast sjunkande";
		
	} else {
		cout << "Ingen förändring";
	}
	return 0;
}
