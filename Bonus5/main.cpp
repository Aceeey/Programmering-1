 #include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main (int argc, char** argv) {
	int tal1, tal2, tusen;
	
	tal1 = 10001;
	
	tal1 = tal2 - tal1;
	
	cout << "Totalt " << tal1 << " kr";
	cout << "Totalt " << tal1 << " kr" << endl;
	
	if (tal1 >= 1000) {
		
		tal2 = tal1 / 1000;
		tal2 = floor (tal2);
		
			}
		
		if (tal2 != 0) {
			
			tal1 = tal1 % 1000;
			
		}
		
		if (tal2 == 1) {
			
			cout << tal2 << " Tusenlapp" << endl;
			
		}
		
		else {
			
			cout << tal2 << " Tusenlappar" << endl;
			
		}
	
    if (tal1 >= 500) {
		
		tal2 = tal1 / 500;
		tal2 = floor (tal2);
		
	tal2 = tal1 / 1000;
	tusen = floor (tal2);
	if (tusen != 0) {
		if (tal2 != 0) {
			
			tal1 = tal1 % 500;
			
		}
		 if (tal2 == 1) {
		 	
		 	cout << tal2 << " Femhundralapp " << endl;
		 	
		}
		
		tal1 = tal1 % 1000;   }
	
		
		else {
			
			cout << tal2 << " Femhundralappar " << endl;
			
		} 
		
	}
	
	if (tal1 >= 200) {
		
		tal2 = tal1 / 200;
		tal2 = floor (tal2);
		
		if (tal2 != 0) {
			
			tal1 = tal1 % 200;
			
		}
		 if (tal2 == 1) {
		 	
		 	cout << tal2 << " Tv?hundralapp " << endl;
		 	
		}
		
		else {
			
			cout << tal2 << " Tv?hundralappar " << endl;
			
		} 
		
	}
	
	if (tal1 >= 100) {
		
		tal2 = tal1 / 100;
		tal2 = floor (tal2);
		
		if (tal2 != 0) {
			
			tal1 = tal1 % 100;
			
		}
		 if (tal2 == 1) {
		 	
		 	cout << tal2 << " Hundralapp " << endl;
		 	
		}
		
		else {
			
			cout << tal2 << " Hundralappar " << endl;
			
		} 
		
	}
	
	if (tal1 >= 50) {
		
		tal2 = tal1 / 50;
		tal2 = floor (tal2);
		
		if (tal2 != 0) {
			
			tal1 = tal1 % 50;
			
		}
		 if (tal2 == 1) {
		 	
		 	cout << tal2 << " Femtiolapp " << endl;
		 	
		}
		
		else {
			
			cout << tal2 << " Femtiolappar " << endl;
			
		} 
		
	}
	
	if (tal1 >= 20) {
		
		tal2 = tal1 / 20;
		tal2 = floor (tal2);
		
		if (tal2 != 0) {
			
			tal1 = tal1 % 20;
			
		}
		 if (tal2 == 1) {
		 	
		 	cout << tal2 << " Tjugolapp " << endl;
		 	
		}
		
		else {
			
			cout << tal2 << " Tjugolappar " << endl;
			
		} 
		
	}
	
	if (tal1 >= 10) {
		
		tal2 = tal1 / 10;
		tal2 = floor (tal2);
		
		if (tal2 != 0) {
			
			tal1 = tal1 % 10;
			
		}
		 if (tal2 == 1) {
		 	
		 	cout << tal2 << " Tia " << endl;
		 	
		}
		
		else {
			
			cout << tal2 << " Tior " << endl;
			
		} 
		
	}
	
	if (tal1 >= 5) {
		
		tal2 = tal1 / 5;
		tal2 = floor (tal2);
		
		if (tal2 != 0) {
			
			tal1 = tal1 % 5;
			
		}
		 if (tal2 == 1) {
		 	
		 	cout << tal2 << " Femma " << endl;
		 	
		}
		
		else {
			
			cout << tal2 << " Femmor " << endl;
			
		} 
		
	}
	
	if (tal1 >= 2) {
		
		tal2 = tal1 / 2;
		tal2 = floor (tal2);
		
		if (tal2 != 0) {
			
			tal1 = tal1 % 2;
			
		}
		 if (tal2 == 1) {
		 	
		 	cout << tal2 << " Tv?a " << endl;
		 	
		}
		
		else {
			
			cout << tal2 << " Tv?or " << endl;
			
		} 
		
	}
	
	if (tal1 >= 1) {
		
		tal2 = tal1 / 1;
		tal2 = floor (tal2);
		
		if (tal2 != 0) {
			
			tal1 = tal1 % 1;
			
		}
		 if (tal2 == 1) {
		 	
		 	cout << tal2 << " Etta " << endl;
		 	
		}
		
		else {
			
			cout << tal2 << " Ettor " << endl;
			
		} 
		
	}
	
	return 0;
}
