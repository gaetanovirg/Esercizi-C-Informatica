#include <iostream>
#define N 100
using namespace std;
	void popolaVettore(int vet[],int dim)
	{
		int i;
		for (i=0; i<dim; i++)
		{
			cout<<"Inserisci temperatura: ";
			cin>>vet[i];
		}
	}
	void stampaVettore (int vet[],int dim)
	{
		int i;
		for (i=0; i<dim; i++)
		{
			cout<<vet[i]<<" ";
		}
		cout<<endl;
	}
	float calcolaMedia (int vet[],int dim)
	{
		int i;
		int somma=0;
		float media;
		for (i=0; i<dim; i++)
		{
			somma+=vet[i];
		}
		media=(float)somma/dim;
		return media;
	}
	
	int temperaturaMinima (int vet[],int dim)
	{
		int i;
		int min=vet[0];
		for (i=1; i<dim; i++)
		{
			if (vet[i]<min)
				min=vet[i];
		}
		return min;
	}
	int temperaturaMassima (int vet[],int dim)
	{
		int i;
		int max=vet[0];
		for (i=1; i<dim; i++)
		{
			if (vet[i]>max)
				max=vet[i];
		}
		return max;
	} 
	
	void superioreMedia(int vet[],int dim)
	{
		int i;
		int media=calcolaMedia(vet,dim);
		for (i=0;i<dim;i++)
		{
			if (vet[i]>media)
			cout<<"Temperature superiori alla media : "<<vet[i]<<endl;
		}
	}
	float calcolaInferioreMedia(int vet[],int dim)
	{
		int i;
		int sommaInferiori=0;
		int contaInferiori=0;
		float mediaInferiori;
		float media=calcolaMedia(vet,dim);
		for (i=0;i<dim;i++)
		{
			if (vet[i]<media)
			{
				sommaInferiori+=vet[i];
				contaInferiori++;
			}
		}
			mediaInferiori=(float)sommaInferiori/contaInferiori;
			return mediaInferiori;
	}
	int main ()
	{
		int scelta;
		int dim;
		int vet[N];
		cout<<"Inserisci il numero di temperature del mese"<<endl;
		cin>>dim;
		do
		{
			cout<<endl;
			cout<<"1)Caricare il vettore  con le temperatura"<<endl;
			cout<<"2)Stampare il vettore popolato"<<endl;
			cout<<"3)calcolare la temperatura media del mese"<<endl;
			cout<<"4) Stampa  la temperatura minima";
			cout<<"5) massima del mese"<<endl;
			cout<<"6) Stampa temperatura superiore alla media del mese"<<endl;
			cout<<"7)stampare la temperatura media dei giorni per i quali la temperatura rilevata è inferiore alla media del mese"<<endl;
			cout<<"0) Esci dal menu' "<<endl;
			cout<<endl;
			cout<<"Inserisci la tua scelta"<<endl;
			cin>>scelta;
			
			switch (scelta)
			{
				case 1:
					popolaVettore(vet,dim);
					break;
				case 2: 
					stampaVettore(vet,dim);
					break;
				case 3:
					cout<<"La media del mese e'"<<calcolaMedia(vet,dim);
					break;
				case 4: 
					cout<<"Il minimo del mese e' '"<<temperaturaMinima(vet,dim);
					break;
				case 5:
					cout<<"Il massimo del mese e' '"<<temperaturaMassima(vet,dim);
					break;
				case 6: 
					superioreMedia(vet,dim);
					break;
				case 7: 
					cout<<"La temperatura inferiore alla media e' "<<calcolaInferioreMedia(vet,dim);
					break;
				case 0: 
					break;
				default: 
					cout<<"Scegli di nuovo, operazione errata";
						
			}
		}while (scelta!=0);
	}
