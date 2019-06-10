#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int kast[5], nummer;
	string val, kasta_om;
	
	for(int i = 0; i < 5; i++) {
		kast[i] = rand() % 6 + 1;	
	}
	
	for(int i = 0; i < 5; i++) {
		cout << kast[i];
		cout << endl;
	}
	
	while(val != "Ja" and val != "Nej") {
		cout << "Vill du kasta om en tarning? (Ja eller Nej) ";
		cin >> val;
	}
	
	if(val == "Ja") {
		cout << "Vilken tarning? (1,2,3,4 eller 5)";
		cin >> kasta_om;
		
		for(int i = 0; i < 5; i++) {
			if(kasta_om[i] == '1') {
				kast[0] = rand() % 6 + 1;
			}
			if(kasta_om[i] == '2') {
				kast[1] = rand() % 6 + 1;
			}
			if(kasta_om[i] == '3') {
				kast[2] = rand() % 6 + 1;
			}
			if(kasta_om[i] == '4') {
				kast[3] = rand() % 6 + 1;
			}
			if(kasta_om[i] == '5') {
				kast[4] = rand() % 6 + 1;
			}
		}
		
		
		for(int i = 0; i < 5; i++) {
			cout << kast[i];
			cout << endl;
		}
	}
	
	return 0;
}
