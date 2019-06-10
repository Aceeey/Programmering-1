#include <iostream>
#include <math.h>

using namespace std;

float FunctionKateter(float sida1, float sida2, float sida3) {
	float c, a, resultat;
	
	if(sida1 < sida2) {
		c = sida2;
		a = sida1;
	} else if(sida2 < sida1) {
		c = sida1;
		a = sida1;
	}
	
	a = a * a;
	c = c * c;
	
	resultat = c - a;
	resultat = sqrt(resultat);
	
	return resultat;
}


float Pythagoras(string val, float sida1, float sida2) {
	float sida3, resultat;
	
	if(val == "Hypotenusan") {
		
		sida1 = sida1 * sida1;
		sida2 = sida2 * sida2;
		sida3 = sida1 + sida2;
		resultat = sqrt(sida3);
		
	} else if(val == "Kateter") {
		resultat = FunctionKateter(sida1, sida2, sida3);
		
	}
	
	
	return resultat;
}


int main(int argc, char** argv) {
	string val;
	float vetsida_1, vetsida_2;
	
	while(val != "Hypotenusan" and val != "Kateter") {
	cout << "Vilken sida vill du veta? (Hypotenusan eller Kateter) ";
	cin >> val;
	}
	
	cout << "Vad är dem 2 sidorna vi vet? ";
	cin >> vetsida_1;
	cin >> vetsida_2;
	
	cout << Pythagoras(val, vetsida_1, vetsida_2);
	
	return 0;
}
