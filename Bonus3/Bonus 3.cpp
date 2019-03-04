#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
  int tim,min,sec;
  int tim1,min1,sec1;
  int A;
  int B;
  int C;
  int D;
  
  cout << "Skriv in tiden på loppet (TIM MIN SEC):"<<endl;
  cin>>tim>>min>>sec;
  
  cout << "Skriv in tiden på lopp 2 (TIM MIN SEC):"<<endl;
  cin>>tim1>>min1>>sec1;
  

  if (min > 60) {
  	tim=tim + 1;
  	min=min - 60;
  }
  else if (sec > 60) {
  	min=min + 1;
  	sec=sec - 60;
  }
   if (min1 > 60) {
  	tim1=tim1 + 1;
  	min1=min1 - 60;
  }
  else if (sec1 > 60) {
  	min1=min1 + 1;
  	sec1=sec1 - 60;
  }

  B=tim+tim1;
  C=min+min1;
  D=sec+sec1;
  
  cout << "Din totala tid är (TIM MIN SEC): "<<B<<endl<<C<<endl<<D<<endl<<endl;
  
  
	
	
	
	return 0;
}
