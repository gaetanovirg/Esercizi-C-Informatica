#include <iostream>
#include <math.h>
using namespace std; 
float calcolaDelta (float a,float b ,float c)
{
	float delta; 
	delta=b*b-4*a*c;
	return delta;
}
float calcolaX1 (float a, float b, float delta)
{
	float x1;
	x1=(-b+sqrt( delta))/(2*a);
	return x1; 
}
float calcolaX2 (float a, float b,float delta)
{
	float x2;
	x2=(-b-sqrt(delta))/(2*a);
	return x2;
}
int main ()
{
	float a,b,c,x1,x2,delta;
	cout<<"inserisci i numeri"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	delta=calcolaDelta(a,b,c);
	if (delta<0){
	cout<<"Equazione impossibile da risolvere";
	}
	else {
	x1=calcolaX1 (a,b,delta);
	x2=calcolaX2(a,b,delta);
	cout<<"L'X1 e'"<<x1<<endl;
	cout<<"L'x2 e'"<<x2;	
	}
	
}


