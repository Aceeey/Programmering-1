#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int RandomGenerator(int storst, int minst, int nummer) {
	srand(time(0));
	
	
	cout << "St�rsta m�jliga talet: ";
	cin >> storst;
	
	cout << "Minsta m�jliga talet: ";
	cin >> minst;
	
	
	while(nummer > storst or nummer < minst) {
		
	nummer = (rand()% storst) + minst;
	}
	
	
	return nummer;
}

int main(int argc, char** argv) {
	int storst, minst, nummer;
	
	cout << RandomGenerator(nummer, storst, minst);
	
	return 0;
}
