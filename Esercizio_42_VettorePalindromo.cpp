	#include <iostream>
	#include <ctime>
	#include <math.h>
	#include <cstdlib>
	#define n 100
	using namespace std;
	void generaVettore(int vett[], int dim)
	{
		int i;
		for(i=0; i<dim; i++)
		{
			vett[i]=(rand()%10);
		}
		cout<<endl;
	}

	void swap (int *a,int *b)
	{
		int appoggio;
		appoggio=*a;
		*a=*b;
		*b=appoggio;
	}
	void ordinaVettore (int vett[],int dim)
	{
		int i=0;
		int j;
		int appoggio;
		for (i=0;i<dim-1;i++)
			{
			for (j=i+1;j<dim;j++)
			{
				if (vett[i]>vett[j])
				{
					swap(&vett[i],&vett[j]);
				}
			}
			}
				cout<<endl;

	}
	int ricercaVettore (int vett[],int dim,int elemento)
			{
			int i;
			int contaPresente=0;
			for (i=0;i<dim;i++)
				{
					if (elemento==vett[i])
						{
							contaPresente++;
						}
				}
			cout<<"L'elemento e'presente "<<contaPresente<<"volte"<<endl;
			return contaPresente;

		}
	void visualizzaVettore(int vett[], int dim)
		{
		int i;
		cout<<endl;
		cout<<"Vettore: "<<endl;
		for(i=0; i<dim; i++)
		{
			cout<<vett[i]<<"  ";
		}
			cout<<endl;

		}
		void frequenzaVettore (int vett[], int vett2[],int dim)
	{
		int i;
		int j;
		for (i=0;i<dim;i++)
		{
			vett2[i]=1;
		}
		for (i=0;i<dim;i++)
		{
			for (j=0;j<i;j++)
			{
				if (vett[i]==vett[j])
					{
						vett2[j]++;
						vett2[i]++;
					}
			}

		}
		visualizzaVettore(vett,dim);
		visualizzaVettore(vett2,dim);
	}
		void bubbleSort (int vett[],int dim)
		{
			int temp,x,k,N;
			do {
			k=0;
			for(int i=0;i<dim-1;i++)
				if(vett[i]>vett[i+1])
				{
					swap(&vett[i],&vett[i+1]);
					k=1;
					x=i+1;
				}
			N=x;

		} while (k==1);
					cout<<endl;

		}
	void inversionevettore (int vett[],int dim)
		{
			int i,j;
			int appoggio;
			for (i=0,j=dim-1;i<dim/2;i++,j--)
			{

				swap(&vett[i],&vett[j]);
			}
			visualizzaVettore(vett,dim);

		}
		int trovaMaggiore(int vett[],int dim)
		{
			int i;
			int max=vett[0];
			int posMax=0;
			for (i=1;i<dim;i++)
			{
				if (vett[i]>max)
				{
					max=vett[i];
					posMax=i;
				}
			}
		cout<<endl;
		return posMax;
		}
		int trovaSecMaggiore (int vett[],int dim)
		{
			int posMax;
			int i;
			int max2=vett[0];
			int pos2=0;
			posMax=trovaMaggiore(vett,dim);
			for (i=1;i<dim;i++)
			{
				if (vett[posMax]>vett[i] && vett[i]>max2)
					{
						max2=vett[i];
						pos2=i;
					}

			}
			return pos2;
		}
		void disordinamentoVettore (int vett[], int dim )
		{
			int i=0;
			int j=0;
			int appoggio=0;
			bubbleSort(vett,dim);
			visualizzaVettore(vett,dim);
			for (i=0;i<dim;i++)
			{
				i=(rand()%dim);
				j=(rand()%dim);
				swap(&vett[i], &vett[j]);
			}
			visualizzaVettore(vett,dim);
		}
		void  binarioDecimale(int vett[],int dim)
		{
			int i;
			for (i=0;i<dim;i++)
			{
				vett[i]=rand()%2;
			}
			visualizzaVettore(vett,dim);
			int j=0;
			int numero=0;
			for (i=dim-1;i>=0;i--)
			{
				numero=numero+vett[i]*pow(2,j);
				j++;
			}
			cout<<"La stringa convertita da Binario a Decimale e'"<<" "<<numero<<endl;
		}
		void decimaleBinario(int vett[],int dim)
		{
			int i;
			int N;
			cout<<"Inserisci un numero e ne effettuero' la conversione Decimale Binaria"<<endl;
			cin>>N;
			while (N>0)
			{
				if (N%2==0)
				{
					vett[i]=0;
				}
				else
				{
				vett[i]=1;
				}
				N/=2;
				i++;
			}
				dim=i;
				cout<<endl;
				cout<<"Ecco il risultato della conversione, ricorda di leggere dal bit meno significativo, cioe' sulla destra"<<endl;
				visualizzaVettore(vett,dim);
				cout<<endl;
				cout<<"Per comodita' ti inverto il vettore in modo da leggere comodamente";
				inversionevettore(vett,dim);
				cout<<endl;
		}
		void controllaPalindromo(int vett[],int dim)
		{
		    int i=0;
		    int j=0;
		    visualizzaVettore(vett,dim);
		    inversionevettore(vett,dim);
            for (i=0,j=dim-1;i<dim/2;i++,j--)
            {
                if (vett[i]==vett[j])
                {
                    cout<<"Vettore Uguale in posizione"<<i<<endl;

                }
                else
                {
                cout<<"Controllo interrotto, in posizione"<<i<<" "<<", il vettore  non e' palindromo"<<endl;
                break;
                }
            }

		}
		void verificaCrescente(int vett[],int dim)
		{
		    int i=0;
		    int j;
		    visualizzaVettore(vett,dim);
             for (i=0,j=1;i<dim/2;i++,j++)
            {

                if (vett[i]<vett[j])
                {
                    cout<<"Casella "<<i<<" e Casella "<<j<<" in ordine corretto "<<endl;
                }
                else
                {
                cout<<"Il vettore non e' in ordine crescente"<<endl;
                break;
                }
            }
		}
        void verificaParita(int vett[],int vett3[],int vett4[],int dim)
        {
            int i;
            for (i=0;i<dim;i++)
            {
                vett3[i]=0;
                vett4[i]=0;
            }
            for (i=0;i<dim;i++)
            {
                if (vett[i]%2==0)
                {
                    vett3[i]=vett[i];
                }

                else
                {
                    vett4[i]=vett[i];
                }
            }
            cout<<"Numeri Pari"<<endl;
            visualizzaVettore(vett3,dim);
            cout<<"Numeri Dispari"<<endl;
            visualizzaVettore(vett4,dim);
        }
	int main () {
		int vett[n];
		int vett2[n];
		int vett3[n];
		int vett4[n];
		int dim;
		int elemento;
		srand(time(NULL));
		int scelta;
		cout<<"Inserisci la dimensione del vettore ";
					cin>>dim;
		do {
			cout<<"Benvenuto in questo programma potrai fare molteplici cose, di seguito l'elenco"<<endl;
			cout<<"1)Genera casualmente un vettore di dimensione"<<endl;
			cout<<"2)Visualizza vettore generato"<<endl;
			cout<<"3)Ricerca un elemento nel vettore"<<endl;
			cout<<"4)Inverti vettore"<<endl;
			cout<<"5)Ordinamento classico vettore"<<endl;
			cout<<"6)Ordinamento vettore con algoritmo Bubble Sort "<<endl;
			cout<<"7)Modifica la dimensione del vettore"<<endl;
			cout<<"8)Frequenza del vettore"<<endl;
			cout<<"9)Trova indice maggiore"<<endl;
			cout<<"10)Trova indice secondo minore del maggiore "<<endl;
			cout<<"11)Conversione da Binario a Decimale"<<endl;
			cout<<"12)Conversione da Decimale a Binario"<<endl;
			cout<<"13)Eseguire il disordinamento di un vettore di interi ordinato"<<endl;
			cout<<"14)Controllare se il vettore é palindromo"<<endl;
			cout<<"15)Controllo ordine crescente vettore"<<endl;
			cout<<"16)Vettore Pari e Dispari"<<endl;
			cout<<"0)Esci dal menu"<<endl;
			cin>>scelta;
			switch (scelta)
			{
				case 1:
					generaVettore(vett,dim);
					cout<<endl;
					break;
				case 2:
					visualizzaVettore(vett,dim);
					cout<<endl;
					break;
				case 3:
					cin>>elemento;
					ricercaVettore(vett,dim,elemento);
					cout<<endl;
					break;
				case 4:
					inversionevettore(vett,dim);
					cout<<endl;
					break;
				case 5:
					ordinaVettore(vett,dim);
					cout<<endl;
					break;
				case 6:
					bubbleSort(vett,dim);
					cout<<endl;
					break;
				case 7 :
					cout<<"Inserisci la dimensione del vettore"<<endl;
					cin>>dim;
					cout<<endl;
					break;
				case 8 :
					frequenzaVettore(vett,vett2,dim);
					break;
				case 9 :
					cout<<"L'indice dove si trova l'elemento maggiore e' il"<<" "<<trovaMaggiore(vett,dim)<<endl;
					break;
				case 10 :
					cout<<"L'indice dove si trova l'elemento minore al maggiore e' il"<<" "<<trovaSecMaggiore(vett,dim)<<endl;
					break;
				case 11:
					binarioDecimale(vett,dim);
					break;
				case 12:
					decimaleBinario(vett,dim);
					break;
				case 13 :
					cout<<"Disordinamento vettore ordinato"<<endl;
					disordinamentoVettore(vett,dim);
					break;
                case 14:
                    controllaPalindromo(vett,dim);
                    break;
                case 15:
                    verificaCrescente(vett,dim);
                    break;
                case 16 :
                    verificaParita(vett,vett3,vett4,dim);
                    break;
				case 0 :
					cout<<"Grazie per aver usato il programma, arrivederci!"<<endl;
					break;
				default :
					cout<<"Scelta non valida, rieseguire il programma"<<endl;
					return 0;
			}



		}while (scelta!=0);

	}
