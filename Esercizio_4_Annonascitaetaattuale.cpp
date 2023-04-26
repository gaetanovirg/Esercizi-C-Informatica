//Dato in input l'anno di nascita di una persona e l'anno attuale calcolare l'etá. 
#include <iostream>
using namespace std;
int main () {
	int annoAttuale,anno_di_nascita,eta;
	cout<<"Inserisci l'anno di nascita e l'anno attuale per calcolare l'eta'"<<endl;
	cin>>anno_di_nascita;
	cin>>annoAttuale;
	eta=annoAttuale-anno_di_nascita;
	cout<<"L'eta' attuale e' di "<<eta<<" anni , ";
	if (eta>=18)
	{ 
	  cout<<"e' maggiorenne";
	}
	
	else 
	{ 
	  cout<<" e' minorenne ";
	}	
	
}
