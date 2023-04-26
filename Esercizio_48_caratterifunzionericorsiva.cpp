#include <iostream>
#include <cmath>
using namespace std;
void carattere(int n)
{
    if (n==0)
        return ;
    cout<<"*"<<endl;
    carattere(n-1);
}
int main ()
{
    int n=0;
    cout<<"Inserisci numero caratteri * da stampare"<<endl;
    cin>>n;
    carattere(n);
}
