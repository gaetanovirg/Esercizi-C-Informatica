#include <iostream>
#include <cmath>
#define n 5 //nrighe
#define m 10 //ncolonne
using namespace std;
void caricaMatrice (int mat[][m],int nr,int nc) // La mat nella funzione deve essere dichiarata con un parametro ;
{
    int i;
    int j;
    for (i=0;i<nr;i++) // Il primo ciclo for serve per scorrere le righe dall'alto verso il basso
    {
        for (j=0;j<nc;j++)
        {
            cout<<"Inserisci elemento "<<endl;
            cin>>mat[i][j];
        }
    } // Esegue il primo ciclo for I é a 0 , entra nel secondo ciclo for e si incrementa J fino ad essere minore di numero colonne, dopo di che i si incrementa a 1 ecc.
}
void visualizzaMatrice (int mat[][m],int nr,int nc)
{
    int i;
    int j;
    for (i=0;i<nr;i++)
    {
        for (j=0;j<nc;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
void sommaRighe(int mat[][m],int nr,int nc)
{
    int i;
    int j;
    for (i=0;i<nr;i++)
    {
        int somma=0; //Dichiaro una variabile somma cosi ogni volta che indice I scorre la inizializzo
        for (j=0;j<nc;j++)
        {
            somma+=mat[i][j];
        }
        cout<<"La somma della riga"<<" "<<i<<" e' "<<somma<<endl;
    }

}
void sommaColonne(int mat[][m],int nr,int nc)
{
    int i;
        int j;
        for (i=0;i<nr;i++)
        {
            int somma=0;
            for (j=0;j<nc;j++)
            {
                somma+=mat[j][i];
            }
            cout<<"La somma della colonna "<<" "<<i<<" e' "<<somma<<endl;
        }

}
void sommaDiagonalePrincipale(int mat[][m],int nr,int nc)
{
    int sommaPrimaria=0;
    for (int i=0;i<nr;i++)
    {
        sommaPrimaria+=mat[i][i];
    }
    cout<<"La somma diagonale principale e' "<<sommaPrimaria<<endl;
}
void sommaDiagonaleSecondaria(int mat[][m],int nr,int nc)
{
    int sommaSecondaria=0;
    int i=0;
    for (i=0;i<nc;i++)
    {
        sommaSecondaria+=mat[i][nc-i-1];
    }
    cout<<"La somma diagonale secondaria e' " <<sommaSecondaria<<endl;
}
void matriceTrasposta (int mat[][m],int nr,int nc)
{
    int i;
    int j;
    int appoggio;
    for (i=0;i<nr-1;i++)
    {
        for (j=i+1;j<nc;j++)
        {
            appoggio=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=appoggio;

        }
    }
    visualizzaMatrice(mat,nr,nc);


}
int sommaCorniceMatrice(int mat[][m],int nr,int nc)
{
    int i;
    int j;
    int somma=0;

    for (i=0;i<nr;i++)
    {
        for (j=0;j<nc;j++)
        {

            if (i==0 ||j==0 || i==nr-1 || j==nc-1)
            {
                somma+=mat[i][j];
            }

        }
                                                          ;
    }
    cout<<"La somma e'"<<somma<<endl;
        return somma;

}
void sommaElementiSottesi(int mat[][m],int nr)
{
    int i=0;
    int j=0;
    int somma;
    for (i=1;i<nr;i++)
        {
            somma=0;
            for (j=0;j<i;j++)
            {
                somma+=mat[i][j];
            }
            cout<<"La somma degli elementi sottesi alla riga"<<i<<"e' "<<somma<<endl;
        }
}
void sommaElementiSuperiori(int mat[][m], int nr, int nc)
{
    int i=0,j=0;
    int somma= 0;
    for (i = 0; i < nr; i++)
    {
        for (j=i+1; j < nc; j++)
        {
            somma += mat[i][j];
        }
    }
    cout << "La somma degli elementi sopra la diagonale secondaria e' " << somma << endl;
}
void tavolaPitagorica(int mat[10][10])
{
    int i;
    int j;
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            mat[i][j]=(i+1)*(j+1);
            cout<<mat[i][j];

        }
        cout<<endl;
    }
}


int main(){
    int mat[n][m];
    int nr;
    int nc;
    int scelta;
    cout<<"Inserisci N righe"<<endl;
    cin>>nr;
    cout<<"Inserisci N colonne"<<endl;
    cin>>nc;
    do{
        cout<<"Benvenuto in questo programma, di seguito verranno elencate le funzioni disponibili"<<endl;
        cout<<"1)Inserisci elementi all'interno delle righe e colonne della matrice"<<endl;
        cout<<"2)Visualizza gli elementi all'interno delle righe e colonne della matrice"<<endl;
        cout<<"3)Somma delle righe della matrice"<<endl;
        cout<<"4)Somma delle colonne della matrice"<<endl;
        cout<<"5)Somma della diagonale principale"<<endl;
        cout<<"6)Somma della diagonale secondaria"<<endl;
        cout<<"7)Scambio righe colonne "<<endl;
        cout<<"8)Somma cornice matrice"<<endl;
        cout<<"9) somma elementi sottesi diagonale principale "<<endl;
        cout<<"10)Somma elementi superiori diagonali secondaria"<<endl;
        cout<<"11)tavola pitagorica"<<endl;
        cout<<"0)Esci dal menu'"<<endl;
        cout<<endl;
        cout<<"Inserisci la tua scelta"<<endl;
        cin>>scelta;
            switch (scelta)
                {
                case 1:
                caricaMatrice(mat,nr,nc);
                break;
                case 2:
                visualizzaMatrice(mat,nr,nc);
                break;
                case 3:
                sommaRighe(mat,nr,nc);
                break;
                case 4:
                sommaColonne(mat,nr,nc);
                break;
                case 5:
                sommaDiagonalePrincipale(mat,nr,nc);
                break;
                case 6:
                sommaDiagonaleSecondaria(mat,nr,nc);
                break;
                case 7 :
                    matriceTrasposta(mat,nr,nc);
                    break;
                case 8 :

                    cout<<sommaCorniceMatrice(mat,nr,nc);
                    break;
                case 9 :
                    sommaElementiSottesi(mat,nr);
                    break;
                case 11:
                    tavolaPitagorica(mat);
                    break;
                case 10:
                    sommaElementiSuperiori(mat,nr,nc);
                    break;

                case 0:
                    cout<<"Grazie per aver utilizzato questo programma, buona continuazione";
                    break;
                default :
                    cout<<"Scelta invalida"<<endl;
                break;
                }
        }while(scelta!=0);


}

