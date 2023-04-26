#include <iostream>
using namespace std;

int main ()
{
	int a,conteggio;
	cout<<"inserisci il numero per vedere se e' primo"<<endl;
	cin>>a;
	conteggio=2;
	if(a<0)
	{
		cout<<"il numero e' negativo";
	}
else {
			while (conteggio<a && a%conteggio!=0)
	{
		conteggio++;
	}
		if (conteggio==a)
		{
			cout<<"il numero  e' primo"<<endl;
		

			
		}
		
		else  
		
		{	
		
			cout<<"il numero non e' primo"<<endl;
			

		}
			
		
		}

		

	
	
}	
	
