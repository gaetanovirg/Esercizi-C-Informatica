#include <iostream>
#include <ctime>
#include <stdio.h>
#include <cstdlib>
#define n 100
using namespace std;
void generaVettore(int vett[], int dim)
{
	int i;
	for(i=0; i<dim; i++)
	{
		vett[i]=(rand()%100)+1;
	}
	cout<<endl;
}
void ordinaVettore (int vett[],int dim)
{
	int i=0;
	int j;
	int appoggio;
	for (i=0;i<n;i++)
		{
		for (j=i+1;j<n;j++)
		{
			if (vett[i]>vett[j])
			{
			appoggio=vett[i];
			vett[i]=vett[j];
			vett[j]=appoggio;
			}
		}
		}
			cout<<endl;

}
int ricercaVettore (int vett[],int dim,int elemento)
	{
		int i;
		int contaPresente=0;
		for (i=0;i<dim;i++)
		{
				if (elemento==vett[i])
					{
						contaPresente++;
					}
		}
		cout<<"L'elemento e'presente "<<contaPresente<<"volte"<<endl;
		return contaPresente;

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
		cout<<endl;

	}
	void bubbleSort (int vett[],int dim)
	{
		int temp,x,k,N;
		do {
		k=0;
		for(int i=0;i<dim-1;i++)
			if(vett[i]>vett[i+1])
			{
				temp=vett[i];
				vett[i]=vett[i+1];
				vett[i+1]=temp;
				k=1;
				x=i+1;
			}
		N=x;
		cout<<endl;

	} while (k==1);
	}		
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
		cout<<endl;

	}
int main () {
	int vett[n];
	int dim;
	int elemento;
	srand(time(NULL));
	int scelta;
	cout<<"Inserisci la dimensione del vettore ";
				cin>>dim;
	do {
		cout<<"Benvenuto in questo programma potrai fare molteplici cose, di seguito l'elenco"<<endl;
		cout<<"1)Genera casualmente un vettore di dimensione"<<endl;
		cout<<"2)Visualizza vettore generato"<<endl;
		cout<<"3)Ricerca un elemento nel vettore"<<endl;
		cout<<"4)Inverti vettore"<<endl;
		cout<<"5)Ordinamento classico vettore"<<endl;
		cout<<"6)Ordinamento vettore con algoritmo Bubble Sort "<<endl;
		cout<<"7)Modifica la dimensione del vettore"<<endl;
		cout<<"0)Esci dal menu"<<endl;
		cin>>scelta;
		switch (scelta)
		{
			case 1: 
				generaVettore(vett,dim);
				cout<<endl;
				break;
			case 2: 
				visualizzaVettore(vett,dim);
				cout<<endl;
				break;
			case 3: 
				cin>>elemento;
				ricercaVettore(vett,dim,elemento);
				cout<<endl;
				break;
			case 4: 
				inversionevettore(vett,dim);
				cout<<endl;
				break;
			case 5:
				ordinaVettore(vett,dim);
				cout<<endl;
				break;
			case 6: 
				bubbleSort(vett,dim);
				cout<<endl;
				break;
			case 7 :
				cout<<"Inserisci la dimensione del vettore"<<endl;
				cin>>dim;
				cout<<endl;
				break;
			case 0 :
				cout<<"Grazie per aver usato il programma, arrivederci!"<<endl;
				break;
			default :
				cout<<"Scelta non valida, rieseguire il programma"<<endl;
				return 0;
		}
		
				
		
	}while (scelta!=0);
	
}
