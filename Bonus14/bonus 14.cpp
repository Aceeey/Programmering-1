#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int samma1, samma2, samma3, samma4, samma5, samma6;
	string ord;
	char a1 = 'M', a2 = 'A', a3 = 'T';
	char a4 = 'm', a5 = 'a', a6 = 't';
	
	cout << "Skriv in ett ord: " << endl;
	getline(cin, ord);
	
	int stop = 0;
	while (ord[stop] != '\0')
	{
      stop++;
	}
	
	for(int i = 0; i < stop; i++)
	{
		if(ord[i] == a1 or ord[i] == a4)
		{
			samma1 = true;
		}
		if(ord[i] == a2 and samma1 == true or ord[i] == a5 and samma1 == true)
		{
			samma2 = true;
		}
		if(ord[i] == a3 and samma2 == true or ord[i] == a6 and samma2 == true)
		{
			samma3 = true;
		}
	}
	
	if(samma1 == true and samma2 == true and samma3 == true)
	{
		cout << "Mat!";
	}
	
	return 0;
}
