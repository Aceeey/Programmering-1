#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int A;
	int B;
	int C;
	
	cout << "Vilket �r �r det nu?"<<endl;
	cin >>B;
	
	cout << "Vilket modell�r �r din bil ifr�n?"<<endl;
	cin >>A;
	
	C=B-A;
	
	if (C > 5) {
		cout << " K�p halvf�rs�kring"<<endl;
	}
	else if (C < 5) {
		cout << "K�p helf�rs�kring"<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
