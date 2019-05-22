#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int nummer, storst, minst;
	
	cout << "Minsta möjliga talet: ";
	cin >> minst;
	
	cout << "Största möjliga talet: ";
	cin >> storst;
	
	
	while(nummer > storst or nummer < minst) {
		
	nummer = (rand()% storst) + minst;
	}
	
	cout << nummer;
	
	return 0;
}
