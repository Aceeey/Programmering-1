#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
 int tal1;
 int tal2;
 int miltal;
 int bensin;
 int forbrukning;
 
	cout << "Hur ser dagens matarstallning ut?";
	cin >>tal1;
	
	cout << "Hur sag matarstallningen ut f�rra aret?";
	cin >> tal2;
	
	cout << "Hur manga liter bensin har du anv�nt under aret?";
	cin >> bensin;
	
	miltal = tal1 - tal2;
	forbrukning = miltal / bensin;
	
	cout << "Antal mil k�rda: "<< miltal<<endl;
	cout << "Antal m�ngd bensin: "<<bensin<<endl;
	cout << "Forbrukning per mil: "<<forbrukning<<endl;
	
	
	
	
	return 0;
}
