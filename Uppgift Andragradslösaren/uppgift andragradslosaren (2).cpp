#include <iostream>
#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

 int term2 (int a, int b, int c);

    int a, b, c;

    float root1, root2, t1, t2, t3;

    root1 = root2 = 0.0;

    cout << "Skriv in ekvationen:" << endl;

    cout << "A="; cin >> a;

    cout << "B="; cin >> b;

    cout << "C="; cin >> c;

    cout << "A=" << " " << a;

    cout << "B=" << " " << b;

    cout << "C=" << " " << c << endl;

    cout << endl;

    t1 = -1 * b;

    t2 = term2 (a, b, c);

    t3 = sqrt (t2);

    root1 = (t1 + t3)/ (2 * a);

    root2 = (t1 - t3)/ (2 * a);

    cout << "\t\t\t\tRoot-1 =" << " " << root1 << endl;

    cout << "\t\t\t\tRoot-2 =" << " " << root2 << endl;


    return 0;

}

int term2 (int x, int y, int z){


    int p = y * y;

    int q = 4 * x * z;

    int r = p - q;

    if (r < 0)

    cout << "Det finns ingen reell lösning" << endl;

    if (r == 0)

    cout << "Det finns 1 reell lösning" << endl; if (r > 0)

    cout << "Det finns 2 reella lösningar" << endl;

    return r;

}
	
