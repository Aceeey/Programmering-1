#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int kontroll;
	bool is_ten;
	
	cout << "Skriv in ett heltal:"<<endl;
	cin >> kontroll;
	
	if (kontroll == 10) {
		is_ten = true;
	}
	else if (kontroll != 10) {
		is_ten = false;
	}
	
    if (is_ten == true) {
		cout << "Du skrev in 10"<<endl;
	}
	
    else if (is_ten == false) {
		cout << "Du skrev inte in 10"<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
