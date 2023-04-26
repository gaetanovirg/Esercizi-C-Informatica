#include <iostream>
using namespace std;
int main () {
	int giorniMese,conteggio;
	float temp, somma=0,max=-1000, min=1000;
	cin>>giorniMese;
	for (conteggio=1;conteggio<=giorniMese;conteggio++)
	{
		cout<<"Inserisci la temperatura";
		cin>>temp;
		somma=somma+temp;
		if (temp>max)
			{
			max=temp;
			}
		if (temp<min)
		{
			min=temp;
		}
	}
	cout<<"La temperatura massima e' "<<max;
	cout<<"La minima e' "<<min;
	cout<<"La media e' "<<somma/giorniMese;
	
	
	
	
	
	
	
}
