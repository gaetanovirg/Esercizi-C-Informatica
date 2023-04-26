//Dato in input il terzo di un prodotto calcolare il prezzo scontato del 30%
#include <iostream>
using namespace std; 
int main () {
float prezzo,sconto,prezzoScontato;
cout<<"Inserisci il prezzo per calcolarne lo sconto"<<endl;
cin>>prezzo;
sconto=prezzo*0.30;
prezzoScontato=prezzo-sconto;
cout<<"il prezzo scontato del 30% e' di "<<prezzoScontato<<" euro ";
}

