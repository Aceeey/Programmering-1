#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int A;
	int B;
	int C;
	
	cout << "Vilket år är det nu?"<<endl;
	cin >>B;
	
	cout << "Vilket modellår är din bil ifrån?"<<endl;
	cin >>A;
	
	C=B-A;
	
	if (C > 5) {
		cout << " Köp halvförsäkring"<<endl;
	}
	else if (C < 5) {
		cout << "Köp helförsäkring"<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
