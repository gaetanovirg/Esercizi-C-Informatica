#include <iostream>
using namespace std;
int main () {
//Visualizzare numeri da 1 a 100
int conteggio;
for (conteggio=1;conteggio<=100;conteggio++)
{
cout<<conteggio<<endl;
}
//Visualizzare numeri pari da 0 a 100
for (conteggio=0;conteggio<100;conteggio++)
{
if (conteggio%2==0)
cout<<conteggio<<endl;
}
//visualizzare i numeri da 0 a 100 a 10 a 10
for (conteggio=0;conteggio<100;conteggio+=10)
{
cout<<conteggio<<endl;
}
//visualizzare i numeri da 100 a 0
for (conteggio=100;conteggio>=0;conteggio--)
{
cout<<conteggio<<endl;
}
//visualizzare i numeri da +50 a meno 50
for (conteggio=50;conteggio>=-50;conteggio--)
{
cout<<conteggio<<endl;
}
// Dati in input 10 numeri calcolarne la media
int media, somma=0,n;
cout<<"Inserisci 10 numeri"<<endl;
for (conteggio=0;conteggio<10;conteggio++)
{	
	cin>>n;
	somma=somma+n;
}
media=somma/10;
cout<<"La media e' "<<media<<endl;

// Leggere 10 numeri e dire quanti sono positivi, quanti negativi e quanti nulli
int contaPiu, contaMeno, contaNullo;
cout<<"Inserisci 10 numeri"<<endl;
for (conteggio=0;conteggio<10;conteggio++)
{
	cin>>n;
	if (n<0)
	{
		contaMeno++;
	}
	if (n==0)
	{
		contaNullo++;
	}
	if (n>0)
	{
		contaPiu++;
	}
}
cout<<"I numeri positivi sono "<<contaPiu<<endl;
cout<<"I numeri negativi sono "<<contaMeno<<endl;
cout<<"I numeri nulli sono "<<contaNullo<<endl;
//Visualizzare i primi 20 numeri della successione di Fibonacci
	int a=0,b=1,c=0;
	cout<<"I numeri di fibonacci sono"<<endl;
	cout<<"0"<<endl; 
	for (conteggio=2; conteggio<=20; conteggio++)
	{
	a=b;
	b=c;
	c=a+b;
	cout<<c<<endl;
	}


}
