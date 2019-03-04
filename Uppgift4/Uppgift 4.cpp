#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int variabel_A;
	int variabel_B;
	int variabel_C;
	int variabel_D;
	
	
	cout << " Skriv in värde på Variable A" << endl;
	cin >>variabel_A;
	
	
	cout << " Skriv in värde på Variable B" << endl;
	cin >>variabel_B;
	
    variabel_C = variabel_A;
	variabel_D = variabel_B;
	variabel_A = variabel_D;
	variabel_B = variabel_C;
	
	cout << " Värdet av variable A är" <<variabel_B<<endl;
	cout << " Värdet av variable B är" <<variabel_A<<endl;
	
	
	
	
	
	
	
	
  return 0;
}
	
	
