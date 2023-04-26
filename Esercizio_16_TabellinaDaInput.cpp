#include <iostream>
using namespace std;
int main () 
{
	int conteggio,numero,tabellina;
	cout<<"Inserisci un numero e stampero' in output le tabelline"<<endl;
	cin>>numero;
	while (numero>10) { 
	cout<<"Reinserire il numero"<<endl;
	cin>>numero;
	}
	conteggio=0;
	while (conteggio<10)
	{ 
		conteggio=conteggio+1;
		tabellina=conteggio*numero;
		cout<<numero<<"X"<<conteggio<<"="<<tabellina<<endl;
	}
	}


