#include <iostream>
using namespace std;
int main()  {
 	int righe, colonne, contaRighe, contaColonne;
 	cout<<"Inserisci il numero di righe"<<endl;
 	cin>>righe;
 	cout<<"Inserisci il numero di colonne"<<endl;
 	cin>>colonne;
 	for (contaRighe=1;contaRighe<=righe;contaRighe++)
 	{
 		
		for (contaColonne=1;contaColonne<=colonne;contaColonne++)
		{
			cout<<"*";
		}	
		cout<<endl;
	}
	


}
