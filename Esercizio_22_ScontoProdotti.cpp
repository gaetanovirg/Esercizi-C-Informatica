#include <iostream>
using namespace std; 
int main () 
{
	float prezzo, prezzoTotale,prezzoScontato; 
	int quantita;
	cout<<"Inserisci il prezzo"<<endl;
	cin>>prezzo;
	cout<<"Inserisci la quantita"<<endl;
	cin>>quantita;
	switch(quantita)
	{
		case 0 ... 10:
			prezzoTotale=prezzo*quantita;
			cout<<"Per la seguente quantita  non sono previsti sconti, il prezzo da pagare e' "<<prezzoTotale<<" euro";
			break;
		case 11 ... 20:
			prezzoScontato=prezzo*quantita*10/100;
			cout<<"Hai diritto al 10% di sconto, pagherai quindi  "<<prezzoScontato<<" euro";
			break;
		case 21 ... 50:
			prezzoScontato=prezzo*quantita*30/100;
			cout<<"Hai diritto al 30% di sconto, pagherai quindi  "<<prezzoScontato<<" euro";
			break;
		default:
    		prezzoScontato=prezzo*quantita*40/100;
    		cout<<"Hai diritto al 40% di sconto, pagherai quindi  "<<prezzoScontato<<" euro";
      		break;
	}

}

