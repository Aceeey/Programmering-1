#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int random, anv;
	srand(time(0));
	
	
	while(random > 100 or random < 1) {
	random = (rand() % 100) + 1;
	}
	

	for(int i = 0; i < 5; i++) {
		
		cout << "Gissa på ett nummer mellan 1-100: ";
		cin >> anv;
		
		if(anv == random) {
			cout << "You Win!";
			return 0;
			
			
		} else if(anv < random) {
			cout << "Nummret är större än " << anv << endl;
			
			
		} else if(anv > random) {
			cout << "Nummret är mindre än " << anv << endl;
		}
	}
	
	cout << "Game Over! ";
	
	return 0;
}
