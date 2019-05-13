#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int A,B,C;
	int stanna = 0;
	string ett;
	char m1 = 'm', a1 = 'a', t1 = 't';
	char m2 = 'M', a2 = 'A', t2 = 'T';
	
	cout << "Skriv in ett ord:" <<endl;
	getline(cin,ett);
	
		while (ett[stanna] != '\0')
	{
      stanna++;
	}
	
	for(int i = 0; i < stanna; i++)
	{
		if(ett[i] == m1 or ett[i] == m2)	{
			A = true;
		}
		if(ett[i] == a1 or ett[i] == a2)	{
			B = true;
		}
		if(ett[i] == t1 or ett[i] == t2)	{
			C = true;
		}
	}
	
	if(A == true and B == true and C == true) {
		cout << "Mat"<<endl;
	}

	
	return 0;
}
