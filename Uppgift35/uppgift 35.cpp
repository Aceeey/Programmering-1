#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

	int AddFunction (int nummer, int nummer2) {
	
	nummer = nummer + nummer2;
	
   return nummer;
}

int main(int argc, char** argv) {
	int nummer, nummer2, nummer3;
	cout << "Skriv in ett heltal:"<<endl;
	cin >> nummer;
	
	cout << "Skriv in ett till heltal:"<<endl;
	cin >> nummer2;
	
	nummer3 = AddFunction(nummer, nummer2);
	
	cout << "Nu har dina 2 heltal adderats: "<< nummer3;
	
	return 0;
}
