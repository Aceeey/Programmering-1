#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int A;
	int B=160;
	int C;
	int D;
	int E;
	int F;
	int G;
	
	cout << "Hur m�nga arbetstimmar har du arbetat under denna m�nad?"<<endl;
	cin >> A;
	
	if (A > 160) {
	C=A-B;
	F=B*100;
	E=C*150;
	G=F+E;
	cout << "Du jobbat s� h�r m�nga timmar �vertid: "<<C<<endl;
	cout <<  "Du har tj�nat: "<<G<<endl;
	}
	else if (A < 160) {
	D=A*100;
	cout << "Du har varit sjuk och endast tj�nat:"<<D;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
