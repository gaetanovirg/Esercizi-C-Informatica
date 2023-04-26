#include <iostream>
#include <ctime>
#include <stdio.h>
#include <cstdlib>
#define n 10
using namespace std;
void inversionevettore (int vett[],int dim)
	{
		int i,j;
		int appoggio;
		for (i=0,j=dim-1;i<dim/2;i++,j--)
		{
		
			appoggio=vett[i];
			vett[i]=vett[j];
			vett[j]=appoggio;
		}
	}
void generaVettoreCasuale(int vett[], int dim)
{
	int i;
	for(i=0; i<dim; i++)
	{
		vett[i]=(rand()%20)+1;
	}
}
void visualizzaVettore(int vett[], int dim)
{
	int i;
	cout<<endl;
	cout<<"Vettore: "<<endl;
	for(i=0; i<dim; i++)
	{
		cout<<vett[i]<<"  ";
	}
}
int main () {
	int vett[n];
	int dim;
	srand(time(NULL));
	cout<<"Inserisci la dimensione del vettore ";
	cin>>dim;
	generaVettoreCasuale(vett,dim);
	visualizzaVettore(vett,dim);
	inversionevettore(vett,dim);
	visualizzaVettore(vett,dim);


}
