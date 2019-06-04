#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int tarning[5];
	
	for(int i = 0; i < 5; i++) {
		tarning[i] = rand() % 6 + 1;	
	}
	
	for(int i = 0; i < 5; i++) {
		cout << tarning[i];
		cout << endl;
	}
	return 0;
}
