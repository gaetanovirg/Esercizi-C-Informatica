//dati due numeri A e B effettuarne il prodotto per somme successiva
#include <iostream>
using namespace std;
int main () {
	int a,b,conta,somma;
	cout<<"Inserisci A e B"<<endl;
	cin>>a;
	cin>>b;
	somma=0;
	conta=0;
	while (conta<b)
	{
		somma=somma+a;
		conta++;
	}
	
	cout<<somma;
	
}
