//dato in input un anno dire se é bisestile
#include <iostream>
using namespace std;
int main () {		
	int anno;
	cout<<"inserisci l'anno";
	cin>>anno;
	if ( (anno%4==0 && anno%100!=0) || (anno%400==0) )
	{ 
		cout<<"l'anno e' bisestile";
	}
	
	else
	
	cout<<"non e' bisestile";
	
	}
