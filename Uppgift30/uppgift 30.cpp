#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	string namn;
	char byta = 'Z';
	
	cout << "Vad är ditt namn?: ";
	cin >> namn;
	
	namn[0] = byta;
	cout << namn;
	return 0;
}
