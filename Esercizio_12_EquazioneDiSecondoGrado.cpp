#include <iostream>
#include <math.h>
using namespace std;
int main () {
	float a,b,c,delta,x,x1,x2;
	cout<<"inserisci il valore del primo termine";
	cin>>a;
	cout<<"inserisci il valore del secondo termine";
	cin>>b;
	cout<<"inserisci il valore del terzo termine";
	cin>>c;
	if (a==0)
	{
		(x=-c/b);
		cout<<x;
	}
	
    else 
		{ 
			delta=b*b-4*a*c;
			if (delta<0)
				cout<<"L'equazione e' impossibile";
		
  			else
  		
			{ 
			x1=(-b+sqrt(delta))/2*a;
			x2=(-b-sqrt(delta))/2*a;
			cout<<"la x1 e' uguale a "<<x1<<","<<" x2 e' uguale a "<<x2;
			}
	}
}
