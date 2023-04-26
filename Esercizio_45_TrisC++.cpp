#include <iostream>
using namespace std;
const char giocatore1='O';
const char giocatore2='X';
void inizializzaMatrice (char mat[][3])
{
    int i;
    int j;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            mat[i][j]='-';
    }
}
void visualizzaMatrice(char mat[][3])
{
    int i;
    int j;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<" "<<mat[i][j];
        }
        cout<<endl;
    }
}
void inserisciMossa(char mat[][3],char giocatoreCorrente,int conteggio)
{
    int riga;
    int colonna;
    cout<<"Inserisci riga in cui vuoi posizionare il tuo carattere"<<endl;
    cin>>riga;
    cout<<"Inserisci colonna in cui vuoi posizionare il tuo carattere"<<endl;
    cin>>colonna;
    riga--;
    colonna--;
    if (mat[riga][colonna]=='-')
    {
        mat[riga][colonna]=giocatoreCorrente;
        conteggio++;
    }
    else
    {
        cout<<"La casella e' gia stata occupata";
        inserisciMossa(mat,giocatoreCorrente,conteggio);
    }
}
char cambioGiocatore(char giocatoreCorrente)
{
        if (giocatoreCorrente==giocatore1)
        {
            return giocatore2;
        }
        else
        {
            return giocatore1;
        }
}

bool controlloVittoria (char mat[][3], char giocatoreCorrente)
{
	int i, j;
	for (i=0; i<3; i++)
	{
		if (mat[i][0]==giocatoreCorrente && mat[i][1]==giocatoreCorrente && mat[i][2]==giocatoreCorrente)
			return true;
	}
	for (j=0; j<3; j++)
	{
		if (mat[0][j]==giocatoreCorrente && mat[1][j]==giocatoreCorrente && mat[2][j]==giocatoreCorrente)
			return true;
	}
	if (mat[0][0]==giocatoreCorrente&& mat[1][1]==giocatoreCorrente && mat[2][2]==giocatoreCorrente)
		return true;
	if (mat[0][2]==giocatoreCorrente && mat[1][1]==giocatoreCorrente && mat[2][0]==giocatoreCorrente)
		return true;
	return false;
}
bool statoPartita (char mat[][3], int conteggio)
{
	if (controlloVittoria (mat, giocatore1))
	{
		cout<<"Il giocatore 1 ha vinto"<<endl;
		return true;
	}
	else if (controlloVittoria (mat, giocatore2))
	{
		cout<<"Il giocatore 2 ha vinto"<<endl;
		return true;
	}
	else if (conteggio==9)
	{
		cout<<"la sfida e' finita in pareggio"<<endl;
		return true;
	}
	return false;
}

int main (){
    char mat[3][3];
    char giocatoreCorrente=giocatore1;
    int conteggio=0;
    inizializzaMatrice(mat);
    visualizzaMatrice(mat);
    while(statoPartita(mat,conteggio)==false)
    {
        cout<<giocatoreCorrente;
        inserisciMossa(mat,giocatoreCorrente,conteggio);
        visualizzaMatrice(mat);
        giocatoreCorrente=cambioGiocatore(giocatoreCorrente);
    }
}
