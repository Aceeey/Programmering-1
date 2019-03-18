#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	    int tal = 0, A, B;
     
     
     cout << "Hur många rader Baa?: "<<endl;
     cin >> B;
    if (15 <= B) {

   for( int i; i < B; i++ ) {
   	
      cout << "Baa";
      
      for(int counter= A; counter < tal; counter++) {
      	
      	cout << ", Baa";
	  }
   
   cout << "  " <<endl;
   tal = tal+1;
   A = 0;
   }
 	}


    else if (B > 15) {
    	cout << "Du kan max använda dig av 15 rader!"<<endl;
	}
	
	
	return 0;
}
