#include <iostream>
#include <ctime> 
#include <cstdlib>
#define n 90
#define c 10
using namespace std;
int estrai(int vet[])
{
     int num;
    do {
    srand(time(NULL));
     num=(rand()%90+1); // mi genera un numero tra 1 e 90 //   
    }while (vet[num-1]==num);
    vet[num-1]=num;
    return num;
}
void inizializzaTabellone (int vet[])
{
    for (int i=0;i<n;i++)
    {
        vet[i]=0;
    }
}
void inizializzaNumeriEstratti (int numeriEstratti[])
{
    for (int i=0;i<c;i++)
    {
        numeriEstratti[i]=0;
    }
}
void creaCartella (int cartella[])
{
    int partenza=1;
    for (int i=0;i<=c;i++)
    {
    	srand(time(NULL));
        cartella[i]=rand()%10+partenza;
        partenza=partenza+10;
    }

}
void visualizzaCartella (int cartella[])
{
	cout<<"cartella : "<<endl;
    for (int i=0;i<c;i++)
    {
        cout<<cartella[i]<<" ";
    }
}
void controllaCartella (int cartella[],int numero, int numeriEstratti[])
{
	int i=0;
	int j=0;
	int punteggio=0;
	for (i=0;i<c;i++)
	{
		if (cartella[i]==numero)
		{
			numeriEstratti[i]=numero;
		}
	
	}
	for (i=0;i<c;i++)
	{
		if (numeriEstratti[i]!=0)
			punteggio++;
	}
	switch (punteggio)
		{
			case 2 : 
				cout<<"Hai fatto ambo"<<endl;
				break;
			case 3 : 
				cout<<"Hai fatto terna"<<endl;
				break;
			case 4 : 
				cout<<"Hai fatto quaterna"<<endl;
				break;
			case 5 :
				cout<<"hai fatto cinquina"<<endl;
				break;
			case 9 : 
				cout<<"Hai fatto tombola"<<endl;
			break;
			
		}
			
}

int main () {
    int i;
    int tabellone[n];
    int cartella[c];
    int scelta;
    int numero;
    int punteggio=0;
    int numeriEstratti[c];
    cout<<"1) Tabellone"<<endl;
    cout<<"2) Giocatore"<<endl;
    cout<<"Inserisci la scelta"<<endl;
    cin>>scelta;
    switch (scelta)
    {
    	case 1 :
    		inizializzaTabellone(tabellone);
			for (i=0;i<n;i++)
				{
					cout<<"Numero estratto : "<<estrai(tabellone)<<endl;
				}
    		break;
    	case 2 : 
    		creaCartella(cartella);
    		visualizzaCartella(cartella);
    		inizializzaNumeriEstratti(numeriEstratti);
    		cout<<endl;
    		for (i=0;i<n;i++)
				{
					cout<<"Inserisci numero estratto"<<endl;
					cin>>numero;
					controllaCartella(cartella,numero,numeriEstratti);
				}
    		break;
	}
    
}
