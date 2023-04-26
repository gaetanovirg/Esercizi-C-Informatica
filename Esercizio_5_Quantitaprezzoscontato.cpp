#include <iostream>
using namespace std;
int main () {
	int quantita;
	float prezzoTotale,prezzoQuantita, prezzoUnitario;
	cout<<" Immetti la quantita' dei prodotti "<<endl;
	cin>>quantita;
	cout<<" Il prezzo unitario dei prodotti "<<endl;
	cin>>prezzoUnitario;
	prezzoQuantita=prezzoUnitario*quantita;
	if (quantita>=1 && quantita<=10) 
	{
     cout<<"Il prezzo  scontato e' di "<<prezzoQuantita<<" euro ";
	}
	
	else if (quantita<=100);
		
	if (quantita>=11 && quantita<=100) 
	{
      cout<<"Il prezzo  scontato del 2o% e' di "<<prezzoQuantita-(prezzoQuantita*20/100)<<"euro";
	}
	else if (quantita<=100);
	
		if (quantita>=101 && quantita<=1000) 
	{
      cout<<"Il prezzo  scontato del 40% e' di "<<prezzoQuantita-(prezzoQuantita*40/100)<<" euro ";
	}
	
	else if (quantita<=1000);
		
	if (quantita>=1001)
	{
      cout<<"Il prezzo  scontato del 45% e' di "<<prezzoQuantita-(prezzoQuantita*45/100)<<" euro ";
	}
	else if (quantita<=1001);
}


