#include <iostream>
#include <math.h>
using namespace std;
int main () {
	int raggio,area;
	cout<<"Questo programma calcolera' l'area e la circonferenza di un cerchio  mediante il valore del raggio"<<endl;
	float pigreco=3.14;
	double circonferenza; 
	cout<<"Digita il valore del raggio"<<endl;
	cin>>raggio;
	area=pigreco*pow (raggio,2);
	circonferenza=2*pigreco*raggio;
	cout<< "l'area del cerchio e' "<< area<<endl<<"La circonferenza e' " <<circonferenza;
}
