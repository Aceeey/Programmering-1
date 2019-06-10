#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int random, andvandare, ai = 0;
	char restart = 'J';
	
	srand(time(0));
	
	while(restart == 'J') {
	

	int ai_max = 100, ai_min = 1;
		

	while(random > 100 or random < 1) {
		random = (rand() % 100) + 1;
	}
	
	

	for(int i = 0; i < 5 and andvandare != random and ai != random; i++) {
		

		cout << "Gissa på ett nummer mellan 1-100: ";
		cin >> andvandare;
		

		if(andvandare == random) {
			cout << "Rätt! Du vann!";
		} else if(andvandare < random) {
			cout << "Det gömda talet är större än " << andvandare << endl;
			if(ai_min < andvandare) {
				ai_min = andvandare;
			}
		} else if(andvandare > random) {
			cout << "Det gömda talet är mindre än " << andvandare << endl;
			if(ai_max > andvandare) {
				ai_max = andvandare;
			}	
		}
		
		while(ai < ai_min and ai != andvandare or ai > ai_max and ai != andvandare) {
			ai = rand() % (ai_max -1) + (ai_min +1);
		}
		
		
		if(andvandare == random) {

		} else if(ai == random) {
			cout << "AI vann! Nummret var: " << random;
			i = 5;
		} else if(ai < random) {
			cout << "AI Gissade " << ai << " Det gömda talet är större " << endl;
			ai_min = ai;
		} else if(ai > random) {
			cout << "AI Gissade " << ai << " Det gömda talet är mindre" << endl;
			ai_max = ai;
		}
		ai = 0;
	}
	
	restart = 'd';
	while(restart != 'J' and restart != 'N') {
		cout << endl << "Vill du spela igen? J/N: ";
		cin >> restart;
	}
	}
	
	return 0;
}
