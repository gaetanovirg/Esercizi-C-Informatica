#include <iostream>
#include <cmath>
using namespace std;
int power(int a,int n)
{
    if (n==0)
        return 1;
    return a*power(a,n-1);
    
}
int fib (int n)
{
    if (n==0)
        return 0;
    if (n==2)
        return 1;
    if (n==1)
        return 0;

    return fib(n-1)+fib(n-2);

}
float prodotto(int n, float vet[])
{
    if (n==0)
        return 1;
    if (n==1)
        return vet[0];
    return vet[n-1]*prodotto(n-1,vet);
}
void caricaVettore(float vet[],int dim)
{
    int i;
    for (i=0;i<dim;i++)
    {
        cin>>vet[i];
    }
}
float sommatoria(int n)
{
    if (n==0)
        return 0;
    return 1/(float)n+sommatoria(n-1);
}

int main() {
    int dim, n,a;
    cout<<"Inserisci dimensione del vettore"<<endl;
    cin >> dim;
    float vet[dim];
    cout<<"Caricamento vettore"<<endl;
    
    caricaVettore(vet, dim);
    cout<<"Inserisci numero fibonacci"<<endl;
    cin >> n;
    cout<<"Il numero di fibonacci e'"<<fib(n)<<endl;
    cout<<"Il prodotto dell'array e'" <<prodotto(dim,vet)<<endl;
    cout<<"Sommatoria di N "<<sommatoria(n)<<endl;
    cout<<"Inserisci A (numero) e N (esponente) e ti diró il risultato della potenza";
    cin>>a;
    cin>>n;
    cout<<power(a,n);
    
    
}
