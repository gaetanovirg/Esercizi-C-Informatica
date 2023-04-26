#include <iostream>
using namespace std;
int main () { 
	int a,b, min,mcd,conteggio=1;
	cout<<"Inserisci un valore A e un Valore B"<<endl;
	cin>>a>>b;
	if (a>b)
	{
		min=b;
	} 	
	else min=a;
		while (conteggio<=min)
		{ 
		if (a%conteggio==0 && b%conteggio==0)
		mcd=conteggio;
		conteggio++;
		}
		 cout<<"Il massimo comune divisore e' "<<mcd;
}
