#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int tarning[5], nummer;
	string val;
	
	for(int i = 0; i < 5; i++) {
		tarning[i] = rand() % 6 + 1;	
	}
	
	for(int i = 0; i < 5; i++) {
		cout << tarning[i];
		cout << endl;
	}
	
	while(val != "Ja" and val != "Nej") {
		cout << "Vill du kasta om en tarning? Ja/Nej ";
		cin >> val;
	}
	
	if(val == "Ja") {
		while(nummer < 1 or nummer > 5) {
			cout << "Vilken tarning vill du slå om? 1,2,3,4,5 ";
			cin >> nummer;
		}
		
		
		nummer--;
		tarning[nummer] = rand() % 6 + 1;
		
		for(int i = 0; i < 5; i++) {
			cout << tarning[i];
			cout << endl;
		}
	}
	
	return 0;
}
