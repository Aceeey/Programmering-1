#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

	
	
	float temp(float c, float f) {
	
	f = c * 1.8 + 32;
	
	return f;
}




void calculator() {
	float c, f;
	
	cout << "Skriv tempraturen i Celcius: ";
	cin >> c;
	
	
	cout << "Tempraturen i Fahrenheit är: " << temp(c, f);
}









int main(int argc, char** argv) {
	calculator();
	
	
	return 0;
}

