	#include <iostream>
	#define n 30
	using namespace std;
	int main () {
			int vet[n] , conteggio, max=-1000, min=1000 ,somma,media, superiore,inferiore;
			for (conteggio=0;conteggio<n;conteggio++)
			{
				cout<<"Inserisci le temperature ";
				cin>>vet[conteggio];
			
			}
			cout<<"I vettori popolati sono "<<endl;
			
			for (conteggio=0;conteggio<n;conteggio++)
			{
				cout<<vet[conteggio]<<endl;
			}
			for (conteggio=0;conteggio<n;conteggio++)
			{
				somma=somma+vet[conteggio];
			}
			media=somma/n;
			cout<<"La media e'"<<media<<endl; 
			for (conteggio=0; conteggio<n;conteggio++)
			{
				if (vet[conteggio]>max)
					{
					max=vet[conteggio];
					}
					if (vet[conteggio]<min)
					{
					min=vet[conteggio];
					}
				
			}
				for (conteggio=0; conteggio<n;conteggio++)
				{
					if (vet[conteggio]>media)
					{
					superiore=vet[conteggio];
					}	
				}
					for (conteggio=0; conteggio<n;conteggio++)
				{
					if (vet[conteggio]<media)
					{
					inferiore=vet[conteggio];
					}	
				}
				
				
				
				cout<<"La temperatura maggiore e' "<<max<<endl;
				cout<<"la temperatura minore e' "<<min<<endl;
				cout<<"la temperatura superiore alla media  e' "<<superiore<<endl;
				cout<<"La temperatura media inferiore del mese e' "<<inferiore<<endl;

}		
