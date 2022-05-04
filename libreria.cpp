#include <iostream>
using namespace std;

struct Anag
{
  
  string titolo, autore,editore,codice,genere;
  float prezzo;
  int anno_pubb;
 
};

int inserimento(Anag libro[])
{
  int n;
  cout<<"inserisci numero dei libri"<<endl;
  cin>>n;

  for(int i = 0; i < n; i++)
  {
    cout<<"inserisci il codice ISBN"<<endl;
    cin>> libro[i].codice;
    cout<<"TITOLO del libro"<<endl;
    cin>> libro[i].titolo;
    cout<<"Autore"<<endl;
    cin>>libro[i].autore;
    cout<<"Editore"<<endl;
    cin>>libro[i].editore;
    cout<<"Anno di Pubblicazione"<<endl;
    cin>>libro[i].anno_pubb;
    cout<<" Tag del Genere"<<endl;
    cin>>libro[i].genere;
    cout<<"Prezzo"<<endl;
    cin>>libro[i].prezzo;
    cout<<endl;
  }
  return n;
}
void visualizza(Anag libro[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<endl;
        cout<<"CODICE ISBN : "<<libro[i].codice<<endl;
        cout<<"TITOLO: "<<libro[i].titolo<<endl;
        cout<<"AUTORE: "<<libro[i].autore<<endl;
        cout<<"EDITORE: "<<libro[i].editore<<endl;
        cout<<"ANNO DI PUBBLICAZIONE: "<<libro[i].anno_pubb<<endl;
        cout<<"PREZZO: "<<libro[i].prezzo<<endl;
        cout<<"TAG DEL GENERE: "<<libro[i].genere<<endl;
    }

}
void elimina(Anag libro[], string cod)
{
	int check=0;
    for(int i = 0; i < 50; i++)
    {
    	if(libro[i].codice==cod)
        {
        	cout<<endl;
        	libro[i].codice="";
        	libro[i].titolo="";
	        libro[i].autore="";
	        libro[i].editore="";
	        libro[i].anno_pubb=0;
	        libro[i].prezzo=0;
	        libro[i].genere="";	
	        check = 1;
	        
		}
		else
		{
			
		}
    }
    if(check==0)
    {
    	cout<<"Codice non trovato";
	}
	else
	{
		cout<<"Eliminazione avvenuta";
	}
}
void cerca(Anag libro[], string cod)
{
	int check=0;
    for(int i = 0; i < 50; i++)
    {
    	if(libro[i].codice==cod)
        {
        	cout<<endl;
	        cout<<"CODICE ISBN : "<<libro[i].codice<<endl;
	        cout<<"TITOLO: "<<libro[i].titolo<<endl;
	        cout<<"AUTORE: "<<libro[i].autore<<endl;
	        cout<<"EDITORE: "<<libro[i].editore<<endl;
	        cout<<"ANNO DI PUBBLICAZIONE: "<<libro[i].anno_pubb<<endl;
	        cout<<"PREZZO: "<<libro[i].prezzo<<endl;
	        cout<<"TAG DEL GENERE: "<<libro[i].genere<<endl;
	        check = 1;
	        
		}
		else
		{
			
		}
    }
    if(check==0)
    {
    	cout<<"Codice non trovato";
	}
	else
	{
	}
}
void modifica(Anag libro[], int n)
{
	
}
void menu(Anag libro[], int n, string cod)
{
    int scelta;
    do
    {
        cout<<"MENU'"<<endl;
        cout<<"1) Inserimento"<<endl;
        cout<<"2) Stampa"<<endl;
        cout<<"3) elimina"<<endl;
        cout<<"4) cerca "<<endl;
        cout<<"5) modifica campi"<<endl;
        cout<<"6) USCITA"<<endl;
        cin>>scelta;

        if(scelta==1)
        {
            cout<<endl;
            n = inserimento(libro);
            cout<<endl;
        }
        else if(scelta==2)
        {
            cout<<endl;
            visualizza(libro, n);
            cout<<endl;
        }
        else if(scelta==3)
        {
            string cod;
			cout<<endl;
            cout<<"inserisci il codice ISBN: ";
            cin>>cod;
            elimina(libro, cod);
            cout<<endl;
        }
        else if(scelta==4)
        {
            cout<<endl;
            string cod;
			cout<<endl;
            cout<<"inserisci il codice ISBN: ";
            cin>>cod;
			cerca(libro, cod);
            cout<<endl;
        }
        else if(scelta==5)
        {
            cout<<endl;
            modifica(libro, n);
            cout<<endl;
        }
       

    }while(scelta<6);
    cout<<"Esco...."<<endl;
    
}

int main()
{
    int n = 0;
    string cod="";
    Anag libro[50];

    menu(libro, n, cod);


    return 0;
}
