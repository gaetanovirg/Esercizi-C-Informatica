#include <iostream>
using namespace std; 
int main () { 
	int i , j , righe, colonne;
	cout<<"Inserisci n righe e n colonne";
	cin>>righe;
	cin>>colonne;
	for (i=0;i<righe;i++)
	{
		for (j=0;j<colonne;j++)
		if (i==0 || j==0 || i==righe-1 || j==colonne-1)
		cout<<"*";
		else cout<<" ";
		cout<<endl;
	}

}


