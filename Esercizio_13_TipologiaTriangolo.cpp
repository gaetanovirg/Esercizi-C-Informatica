#include <iostream>
#include <math.h>
using namespace std;

int main () 
{
	float a,b,c;
	cout<<"inserisci il valore del primo lato"<<endl;
	cin>>a;
	cout<<"inserisci il valore del secondo lato"<<endl;
	cin>>b;
	cout<<"inserisci il valore del terzo lato"<<endl;
	cin>>c;
	if (a+b>c || b+c>a || a+c)
	{
		cout<<"I lati rappresentano il triangolo ";
	}
	else 
	{
		cout<<"I lati non rappresentano il triangolo ";
	}
	
	if (a==b && b==c)
	{
		cout<<"il triangolo e' equilatero ";
	}
	else if (a==b || b==c || c==a)
	{
		cout<<"Il triangolo e' isoscele ";
	}
	else if (a!=b && a!=c && b!=c)
	{
		cout<<"il triangolo e' scaleno ";
	}
	
}
