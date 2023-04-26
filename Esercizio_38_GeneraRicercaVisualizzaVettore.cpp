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
		cout<<"4)Modifica la dimensione del vettore"<<endl;
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
			case 4 :
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
