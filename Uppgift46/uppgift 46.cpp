#include <iostream>

using namespace std;

int Nummerkalk(int summan) {
	if(summan != 0) {
		
		summan = summan + Nummerkalk(summan-1);
	}
	
	return summan;
}
int main(int argc, char** argv) {
	int nummer;
	
	cout << "Skriv in ett nummer: ";
	cin >> nummer;
	
	cout << Nummerkalk(nummer);
	
	return 0;
}
