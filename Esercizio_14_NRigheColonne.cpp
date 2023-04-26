#include <iostream>
using namespace std;
int main () { 
	int contaRighe=0, contaColonne=0, nRighe, nColonne;
	cout<<"Inserisci il numero di Righe e il numero di colonne"<<endl;
	cin>>nRighe;
	cin>>nColonne;

		
	while (contaRighe<nRighe)
	{
		contaColonne=0;
		
		while (contaColonne<nColonne)
		{
			cout<<"*";
			contaColonne++;
			
		}
	
		cout<<endl;
		contaRighe++;
			
		
	}

}
