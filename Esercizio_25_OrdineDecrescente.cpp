#include <iostream>
using namespace std;
int main () {
	int a, b , conteggio=2
	;
	bool spia=true;
	cout<<"Inserisci 20 numeri"<<endl;
	cin>>a>>b;
	if (a<b)
	spia=false;
	while (conteggio<20)
	{
		a=b;
		cin>>b;
		if (a>b)
		spia=true;
		conteggio++;
	}
	if (spia==false)
	{
		cout<<"Non sono in ordine decrescente"; 
	}
	else cout<<"sono in ordine decrescente";

	
	
}
