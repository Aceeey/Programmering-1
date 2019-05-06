#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	bool starta_om = true;
	
	
	while (starta_om = true) {
	int B, C, D;
	string input; 
	char starta;
	
	cout << "Vilket räknesätt vill du använda? (Multiplikation, Addition, Subtraktion, Division)"<<endl;
	cin >> input;
	
	cout << "Vilket är ditt första tal som du vill använda?" <<endl;
	cin >> B;
	
	cout << "Vilket är ditt andra tal som du vill använda?" <<endl;
	cin >> C;
		
	if (input == "Multiplikation") {
		D = B * C;
		cout << "Svaret är "<<D<<endl;
		
	}
	
	else if (input == "Addition") {
		D = B + C;
		cout << "Svaret är "<<D<<endl;

	}
	
	else if (input == "Subtraktion") {
		D = B - C;
		cout << "Svaret är "<<D<<endl;
		
	}
	
	else if (input == "Division" )	{
		D = B / C;
		cout << "Svaret är "<<D<<endl;
		
	}
	
	else {
		cout << "Det du skrev in existerar inte på denna kalkylator!"<<endl;
	}
	
	
	cout << "Vill du köra igen? (Ja eller Nej)" << endl;
	cin >> starta;

	if(starta == 'Ja')	{
		starta_om = true; 
		} 
		
	else if(starta == 'Nej') {
		cout << "Okej, Hej då!";
		starta_om = false;
	}

	
	}
	return 0;
}
