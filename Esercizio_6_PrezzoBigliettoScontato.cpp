/*Dati in input il prezzo del biglietto di un museo e l'età della persona, calcolare il prezzo da pagare considerato che i bambini sotto i 12 anni non pagano, 
i minorenni pagano la metà e gli ultrasessantacinquenni hanno uno sconto del 30%.
*/
#include <iostream>
using namespace std;
int main () {
float prezzoBiglietto, etaPersona, scontoMinorenni,ultaSessantaCinquenni,prezzoScontato;
cout<<" Inserisci il prezzo del biglietto "<<endl ;	
cin>>prezzoBiglietto;
cout<<" Inserisci la tua eta' "<<endl;
cin>>etaPersona;
prezzoScontato=prezzoBiglietto*30/100;
scontoMinorenni=prezzoBiglietto*50/100;
if (etaPersona<=12)
{ 
  cout<<"I bambini sotto ai 12 anni non pagano";
}
  else (etaPersona<=12);
  
  if (etaPersona>=12 && etaPersona<=17)
  
  {
  	cout<<"Sei minorenne e hai diritto del 50% di sconto, "<<" pagherai "<<scontoMinorenni<<" euro ";
  }
  	else if (etaPersona<=17);
  	
  	
  	if(etaPersona>=18 && etaPersona<=64)
  	{
  		cout<<"Il prezzo del biglietto e' "<<prezzoBiglietto<<" euro ";
	}

  if (etaPersona>=65)
  {
  	cout<<"Gli ultrasessantacinquenni hanno diritto al 30% di sconto, "<< "pagherai "<<prezzoScontato<<" euro ";
  }
}
