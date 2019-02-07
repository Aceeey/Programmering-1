#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
	
int main(int argc, char** argv) {
	
	int tal1;
	int tal2;
	int tal3;
	int tal4;
	int produkt1;
	int produkt2;
	int produkt11;
	int produkt21;
	int moms;
	int totalpris;
	
	
	cout << "Mängden av dina produkt i kilogram: "<<endl;
	cin >>tal1;
	
	cout << "Mängden av din produkt i kilogram:"<<endl;
	cin >>tal2;
	
	cout << "Kilopris på produkt 1: "<<endl;
	cin >>tal3;
	
	cout << "Kilopris på produkt 2: "<<endl;
	cin >>tal4;
	
	moms = 1.12;
	produkt1 = tal1 * tal3;
	produkt2 = tal2 * tal3;
	
	produkt11= produkt1 * moms;
	produkt21= produkt2 * moms;
	totalpris = produkt11 + produkt21;
	
	
	cout << "Produkt 1: "<<produkt11;
	cout << "Produkt 2: "<<produkt21;
	cout << "TOTALT Belopp: " <<totalpris;

	
	
	
	return 0;
}
