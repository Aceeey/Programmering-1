#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

int nummer;


cout << "Skriv ett heltal:" << endl;
cin >> nummer;

if(nummer > 63) {
	
	cout << " GAME OVER "<< endl;
	
}
else if(nummer < 45) {
	
	cout << " GAME OVER "<< endl;
	
}
else {
	cout << " GRATTIS DU VANN!" <<endl;
}












	return 0;
}
