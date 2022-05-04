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
