#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	bool starta_om = true;
	
	
	while (starta_om = true) {
	int B, C, D;
	string input; 
	char starta;
	
	cout << "Vilket r�knes�tt vill du anv�nda? (Multiplikation, Addition, Subtraktion, Division)"<<endl;
	cin >> input;
	
	cout << "Vilket �r ditt f�rsta tal som du vill anv�nda?" <<endl;
	cin >> B;
	
	cout << "Vilket �r ditt andra tal som du vill anv�nda?" <<endl;
	cin >> C;
		
	if (input == "Multiplikation") {
		D = B * C;
		cout << "Svaret �r "<<D<<endl;
		
	}
	
	else if (input == "Addition") {
		D = B + C;
		cout << "Svaret �r "<<D<<endl;

	}
	
	else if (input == "Subtraktion") {
		D = B - C;
		cout << "Svaret �r "<<D<<endl;
		
	}
	
	else if (input == "Division" )	{
		D = B / C;
		cout << "Svaret �r "<<D<<endl;
		
	}
	
	else {
		cout << "Det du skrev in existerar inte p� denna kalkylator!"<<endl;
	}
	
	
	cout << "Vill du k�ra igen? (Ja eller Nej)" << endl;
	cin >> starta;

	if(starta == 'Ja')	{
		starta_om = true; 
		} 
		
	else if(starta == 'Nej') {
		cout << "Okej, Hej d�!";
		starta_om = false;
	}

	
	}
	return 0;
}
