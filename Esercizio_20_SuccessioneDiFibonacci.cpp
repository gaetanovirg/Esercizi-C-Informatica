#include <iostream>
using namespace std;
int main () {
	int a=0, b=1,c=0,conteggio=2;
	cout<<"0"<<endl;
	while (conteggio<20)
	{
		a=b;
		b=c;
		c=a+b;
		conteggio++;
		cout<<c<<endl;
	}
	

}
