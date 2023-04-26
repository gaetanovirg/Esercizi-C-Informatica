#include <iostream>
using namespace std; 
int main () {
	int a, b ,conteggio=1;
	cout<<"Inserisci dei numeri "<<endl;
	cin>>a;
	cin>>b;
	while (b>a)
	{
		a=b;
		cin>>b;
		conteggio++;
		
	}	
	cout<<"Hai inserito "<<conteggio<<" Valori";
}
