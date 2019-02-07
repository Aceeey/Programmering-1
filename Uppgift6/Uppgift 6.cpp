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
	

	
	
	if (raknesett==1) {
	cout <<"Välj första heltalet:"<<endl;
	cin >>A;
	
	cout <<"Välj andra heltalet:"<<endl;
	cin >>B;
			
		A+B==C;
		
	cout <<"Svaret är: "<<C<<endl;
	}	
    else if (raknesett==2) {
	cout <<"Välj första heltalet:"<<endl;
	cin >>A;
	
	cout <<"Välj andra heltalet:"<<endl;
	cin >>B;
			
		A-B==C;
		
	cout <<"Svaret är: "<<C<<endl;
		
	}	
	else if (raknesett==3) {
	cout <<"Välj första heltalet:"<<endl;
	cin >>A;
	
	cout <<"Välj andra heltalet:"<<endl;
	cin >>B;
			
		A*B==C;
		
	cout <<"Svaret är: "<<C<<endl;
		
	}
	
	else if (raknesett==4) {
	cout <<"Välj första heltalet:"<<endl;
	cin >>A;
	
	cout <<"Välj andra heltalet:"<<endl;
	cin >>B;
			
		A/B==A;
		
	cout <<"Svaret är: "<<A<<endl;
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
