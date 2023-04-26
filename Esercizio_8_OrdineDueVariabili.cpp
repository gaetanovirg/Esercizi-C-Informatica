#include <iostream>
using namespace std;
int main () { 
int a,b,appoggio;
cout<<"Assegna un valore ad A"<<endl;
cin>>a;
cout<<"assegna un valore a B"<<endl;
cin>>b;
if (a>b)  
{ 
   appoggio=b;
   b=a;
   a=appoggio;
   cout<<"I numeri in ordine sono "<<a<<","<<b;
    }




}
