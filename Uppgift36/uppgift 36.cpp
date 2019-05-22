#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

    string ABBAFunction(string ord1, string ord2, string ord3 ) {
	
	ord3 = ord1 + ord2 + ord1 + ord2;
	
   return ord3;
}

int main(int argc, char** argv) {
	string ord1, ord2, ord3;
	
	cout << "Skriv in första ABBA ordet:"<<endl;
	cin >> ord1;
	
	cout << "Skriv in andra ABBA ordet:"<<endl;
	cin >> ord2;
	
	
	
	cout << "Dina ABBA ord är: "<<ABBAFunction(ord1, ord2, ord3);
	
	
	
	return 0;
}
