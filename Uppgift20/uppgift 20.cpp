#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

	bool run;
	int Counter = 0;
	int Max = 10;
	int A;
	
	run = true;
	
	while (Counter < Max) {
		
		Counter++;
		
		}
    
	cout << Counter<<endl;
    
    cout << "Vill du avsluta programmet? (1 = Ja, 2 = Nej)" <<endl;
    cin >> A;
    
    if (A == 2) {
    	while (Counter < Max) {
		
		Counter++;
		
		}
		cout << Counter<<endl;
	}
	
	else if (A == 1) {
		cout <<"Du stängde nyss ner programmet!"<<endl;
		run = false;
	}
    
    
	return 0;
}
