#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
 int svaret;
 int svaret1;
 int resultat;

 cout  << "Hur �r dagens m�tarst�llning?";
 cin >> svaret;

 cout << "Vad �r m�tarst�llningen f�r ett �r sedan?";
 cin >>svaret1;

 resultat = svaret - svaret1;

 cout << " Din bil har �kt " <<resultat;
 
	return 0;
}



