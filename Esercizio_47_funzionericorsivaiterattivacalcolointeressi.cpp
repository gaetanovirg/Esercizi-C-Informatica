#include <iostream>
#include <cmath>
using namespace std;
float ricorsiva(float costo, float tasso,int anni)
{
    if (anni==0)
        return costo;
    return ricorsiva(costo,tasso,anni-1)*(1+tasso/100);
}
float iterativa(float costo, float tasso, int anni)
{
    int i;
    for (i=0; i<anni;i++)
    {
        costo+=costo/100*tasso;
    }
    return costo;
}
int main ()
{
    int i;
    float costo, anni, tasso;
    float somma = 0;
    cout<<"Inserisci costo iniziale"<<endl;
    cin>>costo;
    cout<<"Inserisci anni"<<endl;
    cin>>anni;
    cout<<"Inserisci tasso"<<endl;
    cin>>tasso;
    cout<<"Risultato funzione iterativa"<<iterativa(costo,tasso,anni)<<endl;
    cout<<"Risultato funzione ricorsiva "<<ricorsiva(costo,tasso,anni);
}
