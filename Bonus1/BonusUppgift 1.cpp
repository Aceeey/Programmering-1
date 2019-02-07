#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;



int main(int argc, char** argv) {
	
	int katet1;
	int katet2;
	int hypotenusan;
	int katet11;
	int katet21;
	int hypotenusan2;
	
	cout << " Skriv in Katet nummer 1: "<<endl;
	cin >>katet1;
	
	cout << " Skriv in Katet nummer 2: "<<endl;
	cin >>katet2;
	
	
	katet11 = katet1 * katet1;
	katet21 = katet2 * katet2;
	
	hypotenusan = katet11 + katet21;
	
double x = hypotenusan;
	hypotenusan2 = sqrt(hypotenusan);

	
	cout << " Hypotenusan är:  "<<hypotenusan2;
	
return 0;	
	
	
}

