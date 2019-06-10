#include <iostream>

using namespace std;

Multiplikation(int nummer) {
	if(nummer > 1) {
		nummer = nummer * Multiplikation(nummer-1);
	}
	
	return nummer;
}


int main(int argc, char** argv) {
	int nummer;
	
	cout << "Skriv in ett nummer: (Allt över 33 är för mycket) ";
	cin >> nummer;
	
	cout << Multiplikation(nummer);
	
	return 0;
}
