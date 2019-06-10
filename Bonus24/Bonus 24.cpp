#include <iostream>

using namespace std;

struct rorelse {
	
	int x;
	int y;
	
};

int main(int argc, char** argv) {
	char bc = 'O';
	rorelse ball_xy;
	int andvandarex, andvandarey, xl, yl;
	bool repeat_forever = true;
	

	while(repeat_forever == true) {
	andvandarex = -1, andvandarey = -1;
	while(andvandarex < 0 or andvandarex > 10 or andvandarey < 0 or andvandarey > 10) {
	cout << "Skriv in kordinater X och Y" << endl;
	cin >> andvandarex >> andvandarey;
	}
	
	rorelse andvandare = { andvandarex, andvandarey };
	

	for(int y = andvandarey; y <= 10 and y > 0; y--) {
		cout << endl;
	}

	for(int x = andvandarex; x <= 10 and x > 0; x--) {
		cout << " ";
	}
	cout << bc;
	
	xl = 10 - andvandarex;
	yl = 10 - andvandarey;
	
	while(yl > 0) {
		cout << endl;
		yl--;
	}
	while(xl > 0) {
		cout << " ";
		xl--;
	}
	
	int c = 0;
	char cj;
	while(c != true) {
		cout << endl << "Skriv in J när du redo ";
		cin >> cj;
		
		if(cj == 'j') {
			c = 1;
		} else {
			c = 0;
		}
	}
	system("cls");
	}
	return 0;
}
