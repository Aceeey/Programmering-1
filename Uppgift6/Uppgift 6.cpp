#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int A;
	int B;
	int C;
	int raknesett;
	
	cout << "+ = 1,* = 3, * = 3, / = 4"<<endl;
	cin >> raknesett;
	
	cout <<"Välj första heltalet:"<<endl;
	cin >>A;
	
	cout <<"Välj andra heltalet:"<<endl;
	cin >>B;
	
	
	if (raknesett == 1) {			
		C=A+B;
		
	cout <<"Svaret är: "<<C<<endl;
	}	
    else if (raknesett == 2) {
		C=A-B;
		
	cout <<"Svaret är: "<<C<<endl;
		
	}	
	else if (raknesett == 3) {
		C=A*B;
		
	cout <<"Svaret är: "<<C<<endl;
		
	}
	
	else if (raknesett == 4) {
		C=A/B;
		
	cout <<"Svaret är: "<<C<<endl;
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
