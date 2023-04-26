#include <iostream>
using namespace std;
int main () {
	int  somma=0, conteggio=0, n ;
	float media;
	do 
	{
		cout<<"Inserisci dei numeri"<<endl;
		cin>>n;
		somma=somma+n;
		conteggio++;
		media= (float)somma/conteggio;
	} while (n>0);
	cout<<"La somma dei numeri e' "<<somma<<endl;
	cout<<"La media dei numeri e' "<<media<<endl;
}
