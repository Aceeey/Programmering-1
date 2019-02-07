#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
 int svaret;
 int svaret1;
 int resultat;

 cout  << "Hur är dagens mätarställning?";
 cin >> svaret;

 cout << "Vad är mätarställningen för ett år sedan?";
 cin >>svaret1;

 resultat = svaret - svaret1;

 cout << " Din bil har åkt " <<resultat;
 
	return 0;
}



