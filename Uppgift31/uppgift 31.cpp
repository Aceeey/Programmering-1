#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	string ord;
	char utbyte = 'a',  utbyte2 = 'Z';
	
	cout << "Skriv in ett ord:";
	cin >> ord;
	
	for(int i = 0; i < '/0'; i++) 
	{
		if(ord [i] == 'Z') 
			ord[i] = 'a';
		}
	}
	
	cout <<ord;
	
	return 0;
}
	

