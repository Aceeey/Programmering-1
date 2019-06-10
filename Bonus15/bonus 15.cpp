#include <iostream>

using namespace std;

float FunctionFTC(float grader);

float FunctionCTF(float grader);

float Val(char val, float grader) {
	float resultat;
	
	if(val == 'C')
	{
		float FunctionCTF(float grader);
	} else if(val == 'F') {
		FunctionFTC(grader);
	}
	
	if(val == 'C')
	{
		resultat = FunctionCTF(grader);
	} else if (val == 'F') {
		resultat = FunctionFTC(grader);
	}
	
	return resultat;
}

float FunctionCTF(float grader) {	
	float celcius = grader, fahrenheit;
	fahrenheit = celcius * 1.8 + 32;
	
	return fahrenheit;
}

float FunctionFTC(float grader) {
	float fahrenheit = grader, celcius;
	celcius = (fahrenheit - 32) * 0.5556;
	
	return celcius;
}
float Val(char choise, float degrees);

int main(int argc, char** argv) {
	char val;
	float grader, celcius, fahrenheit;
	
	while(val != 'C' and val != 'F')
	{
	cout  << "Celcius eller Fahrenheit? (C för Celcius och F för fahrenheit)" << endl;
	cin >> val;
	}
	
	cout << "Skriv in antalet grader:";
	cin >> grader;
	
	
	cout << Val(val, grader);
	return 0;
}




