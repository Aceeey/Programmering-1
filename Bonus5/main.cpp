 #include <iostream>

using namespace std;

int main() {
	
	int ett, tvo, fem, tio, tjugo, femtio, hundra, tvohundra, femhundra, tusen, vexel, kop, betal;
	
	ett = 0;
	tvo = 0;
	fem = 0;
	tio = 0;
	tjugo = 0;
	femtio = 0;
	hundra = 0;
	tvohundra = 0;
	femhundra = 0;
	tusen = 0;
	
	
	kop = 20000;
	
	while(kop > 10000)
	{
	cout << "Hur mycket köpte du för? ";
	cin >> kop;
	}
	cout << "Hur mycket betalade du? ";
	cin >> betal;
	
	if(betal == kop or betal < kop)
	{
		cout << "Du ska få tillbaka: 0";
		return 0;
	}
	
	vexel = betal - kop;
	
	cout << "Total växel: " << vexel << endl;
	
	while(vexel > 0)
	{
		while(vexel >= 1000)
		{
			vexel = vexel - 1000;
			tusen = tusen + 1;
	 	}
	 	while(vexel >= 500)
	 	{
	 		vexel = vexel - 500;
	 		femhundra = femhundra + 1;
		}
		while(vexel >= 200)
		{
			vexel = vexel - 200;
			tvohundra = tvohundra + 1;
		}
	 	while(vexel >= 100)
	 	{
	 		vexel = vexel - 100;
	 		hundra = hundra + 1;
		}
	 	while(vexel >= 50)
	 	{
	 		vexel = vexel - 50;
	 		femtio = femtio + 1;
		}
		while(vexel >= 20)
		{
			vexel = vexel - 20;
			tjugo = tjugo + 1;
		}
		while(vexel >= 10)
		{
			vexel = vexel - 10;
			tio = tio + 1;
		}
		while(vexel >= 5)
		{
			vexel = vexel - 5;
		fem = fem + 1;
		}
		while(vexel >= 2)
		{
			vexel = vexel - 2;
			tvo = tvo + 1;
		}
		while(vexel >= 1)
		{
			vexel = vexel - 1;
			ett = ett + 1;
		}
	}
	
	cout << "Din växel: " << endl;
	if(tusen > 0)
	{
		cout << tusen << "tusen" << endl;
	}
		if(femhundra > 0)
	{
		cout << femhundra << " femhundra" << endl;
	}
		if(tvohundra > 0)
	{
		cout << tvohundra << " tvohundra" << endl;
	}
		if(hundra > 0)
	{
		cout << hundra << " etthundra" << endl;
	}
		if(femtio > 0)
	{
		cout << femtio << " femtio" << endl;
	}
		if(tjugo > 0)
	{
		cout << tjugo << " tjugtio" << endl;
	}
		if(tio > 0)
	{
		cout << tio << " tia" << endl;
	}
		if(fem > 0)
	{
		cout << fem << " fem" << endl;
	}
		if(tvo > 0)
	{
		cout << tvo << " två" << endl;
	}
		if(ett > 0)
	{
		cout << ett << " ett" << endl;
	}
	
	return 0;
}
