#include <iostream>

using namespace std;

int main() {
	int array[7], andvandare, ny, position = 10, byt, spara, spara2;
	
	for(int i = 0; i < 7; i++)
	{
		cout << "Skriv in ett nummer: ";
		cin >> andvandare;
		array[i] = andvandare;
	}
	cout << "Skriv in ett nytt värde: ";
	cin >> ny;
	
	while(position > 6 or position < 0)
	{
	cout << "Välj en postion 1-6: ";
	cin >> position;
	}
	
	byt = position;
	
	for(int slut = position; slut < 7; slut++)
	{
		spara = array[byt];
		array[byt] = ny;
		byt++;
		ny = array[byt];
		array[byt] = spara;
		byt++;
	}
	
	for(int i = 0; i < 7; i++)
	{
		cout << array[i] << endl;
	}
	
	return 0;
}
