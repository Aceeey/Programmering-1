#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int A;
	int B;
	int C;


  cout << "Heltal:"<<endl;
  cin>>A;	
  
  cout << "Heltal:"<<endl;
  cin>>B;
  
  cout << "Heltal:"<<endl;
  cin>>C;
	
   if (A > B and A > C) {
   	cout << "Det st�rsta talet �r:"<<A<<endl;
   }
    if (B > A and B > C) {
   	cout << "Det st�rsta talet �r:"<<B<<endl;
   }
	if (C > A and C > B) {
   	cout << "Det st�rsta talet �r:"<<C<<endl;
   }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
