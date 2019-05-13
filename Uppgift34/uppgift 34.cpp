#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

	int IncreaseFunction (int nummer) {
	
	nummer = nummer + 2;
	
   return nummer;
}

int main(int argc, char** argv) {
	int nummer;
	cout << "Skriv in ett heltal:"<<endl;
	cin >> nummer;
	
	
	cout << IncreaseFunction(nummer);
	
	return 0;
}
