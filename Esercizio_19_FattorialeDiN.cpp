#include <iostream>
using namespace std;
int main () {
	int conteggio, fattoriale, numero;
	cout<<"Inserisci il numero e calcolero' il fattoriale"<<endl;
	cin>>numero;
	fattoriale=1;
	conteggio=2;
	while (numero<0)
	{
		cout<<"il fattoriale dei numeri negativi non e' calcolabile "<<endl;
		cin>>numero;
	}
	while (conteggio<=numero)
	{
		fattoriale=fattoriale*conteggio;
		conteggio++;
	}
	cout<<"Il fattoriale del numero "<<numero<<" e' "<<fattoriale;
}
