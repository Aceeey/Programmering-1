#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int random, user;
	char omstart = 'y';
	
	srand(time(0));
	
	while(omstart == 'y') {
		
	while(random > 100 or random < 1) {
	random = (rand() % 100) + 1;
	}
	
	

	for(int i = 0; i < 5; i++) {
		
		cout << "Gissa p� ett nummer mellan 1-100: ";
		cin >> user;
		
		if(user == random) {
			cout << "You win!";
			
		} else if(user < random) {
			cout << "Det g�mda talet �r st�rre �n " << user << endl;
			
		} else if(user > random) {
			cout << "Det g�mda talet �r mindre �n " << user << endl;
		}
	}
	
	cout << "Do you want to play again? y/n: ";
	cin >> omstart;
	}
	
	return 0;
}
