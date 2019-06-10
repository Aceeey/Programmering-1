#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int random, andvandare, ai = 0;
	char restart = 'J';
	
	srand(time(0));
	
	while(restart == 'J') {
		
		

	while(random > 100 or random < 1) {
		random = (rand() % 100) + 1;
	}
	
	
	for(int i = 0; i < 5 and andvandare != random and ai != random; i++) {
		
		cout << "Gissa på ett nummer mellan 1-100: ";
		cin >> andvandare;
		
		if(andvandare == random) {
			cout << "Rätt du vann!";
			
		} else if(andvandare < random) {
			
			cout << "Det gömda talet är större än " << andvandare << endl;
		} else if(andvandare > random) {
			
			cout << "Det gömda talet är mindre än " << andvandare << endl;
		}
		

		while(ai > 100 or ai < 1) {
			ai = rand() % 100 + 1;
		}
		
		if(andvandare == random) {

		} else if(ai == random) {
			cout << "AI vann! Nummret var: " << random;
			
		} else if(ai < random) {
			cout << "AI gissade " << ai << "Det gömda talet är större än" << endl;
			
		} else if(ai > random) {
			cout << "AI gissade " << ai << "Det gömda talet är mindre än" << endl;
			
			
			
			
			
		}
		ai = 0;
	}
	
	
	
	cout << "Vill du spela igen? J/N: ";
	cin >> restart;
	}
	
	return 0;
}
