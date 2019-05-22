#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int A, B;
	int rand();
	srand(time(0));
	
	A = (rand() %10) + 1;
	B = (rand() %10) + 1;
	
	if(A < B) {
		cout << A << endl << B;
	} else if(B < A) {
		cout << B << endl << A;
	} else if(A == B) {
		cout << A << B;
	}
	
	return 0;
}
