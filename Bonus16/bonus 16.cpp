#include <iostream>

using namespace std;

void WhileMax(int nummer) {
	int nummer2 = nummer + 1;
	
	while(nummer2 > nummer) {
		cout << "Skriv in ett tal som är mindre eller är lika mycket som " << nummer << ": ";
		cin >> nummer2;
	}
	
}


int main(int argc, char** argv) {
	int nummer = 9;
	
	WhileMax(nummer);
	
	
	return 0;
}
