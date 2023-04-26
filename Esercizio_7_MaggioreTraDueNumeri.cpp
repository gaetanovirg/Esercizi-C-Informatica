//Dati due numeri a e b dire qual è il maggiore
#include <iostream>
using namespace std;
int main () {
float a,b, maggiore;
cout<<" Inserisci il primo numero (A) ";
cin>>a;
cout<<" Inserisci il secondo numero (B) ";
cin>>b;
if (a==b && b==a)
 {
 	cout<<"I valori immessi sono uguali";
 }
 else 
if (a>=b && b<=a)
{ 
  cout<<"Il valore maggiore immesso e' "<<a<<" (A) ";
}
 else if (b>=a)
 
 {
 	cout<<"Il valore maggiore immesso e' "<<b<<" (B) ";
 }
 
 
}
