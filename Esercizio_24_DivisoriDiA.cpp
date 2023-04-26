#include <iostream>
using namespace std;
int main () {
	int a, divisori, conteggio=1;
	cout<<"inserisci un numero e ti restituiró i suoi divisori"<<endl;
	cin>>a;
	while (conteggio<=a)
	{ 
		if (a%conteggio==0)
		{
			cout<<conteggio<<endl;
		}
		conteggio++;
	}
	}
