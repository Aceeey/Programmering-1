#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int raknesatt, tal1, tal2, summa;
	
	cout << "1 = + " << endl << "2 = - " << endl << "3 = * " << endl << "4 = /" << endl;
	cout << "Ange värde,räknesätt,värde: "<<endl;
	cin >> tal1 >> raknesatt >> tal2;
	
	
	if (raknesatt == 1) {
		
		summa = tal1 + tal2;
		cout << tal1 << " + " << tal2 << " = " << summa;
		
	}
	
	else if (raknesatt == 2) {
		
		summa = tal1 - tal2;
		cout << tal1 << " - " << tal2 << " = " << summa;
	
	}

	else if (raknesatt == 3) {
		
		summa = tal1 * tal2;
		cout << tal1 << " * " << tal2 << " = " << summa;
	
	}

	else if (raknesatt == 4) {
		
		summa = tal1 / tal2;
		cout << tal1 << " / " << tal2 << " = " << summa;
		
	}
	
	
	return 0;
}
