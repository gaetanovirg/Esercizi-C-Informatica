#include <iostream>
using namespace std;
int main () { 
int a,b,c,appoggio;
cout<<"Assegna un valore ad A"<<endl;
cin>>a;
cout<<"assegna un valore a B"<<endl;
cin>>b;
cout<<"assegna un valore a C"<<endl;
cin>>c;
if (a>b)  
{ 
   appoggio=a;
   a=b;
   b=appoggio;
    }
    if (a>c)  
{ 
   appoggio=a;
   a=c;
   c=appoggio;
    }
    
     if (b>c)  
{ 
   appoggio=b;
    b=c;
   c=appoggio;
  
    }
 cout<<" I numeri immessi, disposti in maniera ordinata sono: ";
 cout<<a<<","<<b<<","<<c ;

 

}
