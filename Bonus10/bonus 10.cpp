#include <iostream>

using namespace std;

int main() {
	
	int a = 0, b = 1, next = 0, summan;
	
	
	for (int i = 1; i < 20; i++)
    {
        if(i == 1)
        {
            cout << a << endl;
        }
        if(i == 2)
        {
            cout << b << endl;
        }
        next = a + b;
        a = b;
        b = next;
        
        summan = summan + next;
        
        cout << next << endl;
    }
    summan = summan + 1;
    
    cout << endl << "Summan är: " << summan;
	
	
	return 0;
}
