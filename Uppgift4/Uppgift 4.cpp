#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int variabel_A;
	int variabel_B;
	int variabel_C;
	int variabel_D;
	
	
	cout << " Skriv in v�rde p� Variable A" << endl;
	cin >>variabel_A;
	
	
	cout << " Skriv in v�rde p� Variable B" << endl;
	cin >>variabel_B;
	
    variabel_C = variabel_A;
	variabel_D = variabel_B;
	variabel_A = variabel_D;
	variabel_B = variabel_C;
	
	cout << " V�rdet av variable A �r" <<variabel_B<<endl;
	cout << " V�rdet av variable B �r" <<variabel_A<<endl;
	
	
	
	
	
	
	
	
  return 0;
}
	
	
