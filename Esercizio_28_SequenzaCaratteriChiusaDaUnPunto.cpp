#include <iostream>
using namespace std;
int main() {
	char carattere;
	int contaTotale=0, contaVocali=0;
	cout<<"Inserisci una sequenza di caratteri chiusa da un punto"<<endl;
	do
	{
		cin>>carattere;
		
		switch (carattere)
		{
			case 'a'... 'z':
			case 'A'... 'Z':
			contaTotale++;
			if (carattere=='a'|| carattere=='e' || carattere=='i' || carattere=='o' || carattere=='u'|| carattere=='A'|| carattere=='E' || carattere=='I' || carattere=='O' || carattere=='U' )
			contaVocali++;
			break;
		}
		
	}while (carattere!='.');
	cout<<" Le consonanti sono "<<contaTotale-contaVocali<<endl;
	cout<<" Le vocali sono "<<contaVocali<<endl;
}

