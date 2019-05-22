#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

float temp(float c, float f) {
	
	f = c * 1.8 + 32;
	
	return f;
}


void Calculator() {
	float c, f;
	
	cout << "Vad är tempraturen i Celcius? ";
	cin >> c;
	
	cout << "Temperaturen i Fahrenheit är: " << Calculator(c, f);
}



int main(int argc, char** argv) {
	Calculator();
	return 0;
}
