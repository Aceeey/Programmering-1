#include <iostream>

using namespace std;



float FunctionCalculator(float c, float f) {
	
	f = c* 1.8 + 32;
	
	return f;
}


void FunctionTemp() {
	float c, f;
	
	cout << "Skriv in temperaturen i Celsius: ";
	cin >> c;
	
	
	cout << "Tempraturen i Fahrenheit: " << FunctionCalculator(c, f);
}



int main(int argc, char** argv) {
	FunctionTemp();
	return 0;

}
