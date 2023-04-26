#include <iostream>
using namespace std;
int main () {
	int giorno,mese,anno;
	cout<<"Inserisci l'anno";
	cin>>anno;
	cout<<"Inserisci il mese";
	cin>>mese;
	cout<<"inserisci il giorno";
	cin>>giorno;
	if (anno<0)
		{
			cout<<"Anno non valido";
		}
	else if (mese<1 || mese>12)
		{
			cout<<"Mese non valido";
		}
	else if (mese==4 || mese==6 || mese==9 || mese==11)
		{

			 if (giorno<1 || giorno>30)
			{
				cout<<"Il giorno non e' valido";
			}
			else 
			cout<<"Data valida";
		}
	else if (mese==1 || mese==3 || mese==5 || mese==7 || mese==8 || mese==10|| mese==12)
		{
			if (giorno<1 || giorno>31)
			cout<<"Il giorno non e' valido";
			else 
			cout<<"Data valida";
		}
		
	else if (mese==2)
	{
		 if ((anno%4==0 && anno%100!=0) || (anno%400==0))
		{
	
			if (giorno<1 || giorno>29)
				{
					cout<<"giorno non valido";
				}
				else 
				cout<<"Data valida";
		}
		else if (giorno<1 || giorno>28)
		{	
					cout<<"Il giorno non e' valido";
						
		}
		else 
		cout<<"Data valida";
	}

	}
