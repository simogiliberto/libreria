# libreria
#include <iostream>
using namespace std;

struct Anag
{
  
  string titolo, autore,editore,anno_pubb,codice,genere;
  float prezzo;
 
};

int inserimento(Anag libro[])
{
  int n;
  cout<<"inserisci nuovo libro"<<endl;
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
