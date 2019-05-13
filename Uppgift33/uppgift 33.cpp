#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

	void IncreaseFunction (int nummer) {
	
	nummer = nummer + 2;
	
	cout << nummer;
}

int main(int argc, char** argv) {
	int nummer;
	cout << "Skriv in ett heltal:"<<endl;
	cin >> nummer;
	
	IncreaseFunction(nummer);
	
	
	return 0;
}
