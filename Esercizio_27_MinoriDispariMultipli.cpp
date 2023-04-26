#include <iostream>
using namespace std; 
int main () { 
	int n, contaNumeri,contaMultipli,contaDispari;
	do 
	{
		cout<<"Inserisci una sequenza di numeri"<<endl;
		cin>>n;
		if (n<0 || n>100)
		cout<<"Reinserisci il numero";
		else 
		{
			if (n<=50 && n!=0)
			{
				contaNumeri++ ;
			}
			if (n%2==1)
			{
				contaDispari++;
			}
			if (n%3==0 && n!=0)
			{
				contaMultipli++;
			}
		} 
	}while (n!=0);
	cout<<"i numeri minori di 50 sono "<<" "<<contaNumeri<<endl;
	cout<<"i nuemeri dispari sono "<<" "<<contaDispari<<endl;
	cout<<"i numeri multipli di 3 sono"<<" "<< contaMultipli<<endl;
}
