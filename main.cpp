#include <stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

// definirea clasei de baza carte

class carte
{
  public:
     carte(char *nume)
      {
         strcpy(carte::nume, nume);
      };

    void afiseaza_nume()
      {
         cout<<"\n Titlul cartii:"<<nume<<endl;
      };

  private:
     char nume[40];

 };
// definirea clasei derivate FisaLibrarie

class FisaLibrarie: public carte

 {
   public:

     FisaLibrarie(char *nume, char *aut1, char *aut2, char *ed, int *np, double *p):carte(nume)

     {
        strcpy(FisaLibrarie ::autor1, aut1) ;
        strcpy(FisaLibrarie ::autor2, aut2) ;
        strcpy(FisaLibrarie ::editura, ed) ;
        FisaLibrarie ::nrpag=*np ;
        FisaLibrarie ::pret=*p ;

     };

   void afiseaza_Libraria()

     {
        cout<<"\n         Lista cartilor din librarie:"<<endl;
        cout<<"\n ===================================="<<endl;
        afiseaza_nume() ;
        cout <<"\n numele autorului: "<<autor1;
        cout <<"\n prenumele autorului: "<<autor2;
        cout <<"\n editura: "<<editura;
        cout <<"\n nr de pagini: "<<nrpag;
        cout <<"\n pretul cartii: "<<pret;
        cout<<"\n ===================================="<<endl;
      };

  private:

     char autor1[40];
     char autor2[40];
     char editura[40];
     int nrpag;
     double pret;

 };
int main()

  {
      FisaLibrarie fisa();
      char wnume[40],wautor1[40],wautor2[40],weditura[40];
      int wnrpag;
      double wpret;
      char r='d';
      while(r=='d')

        {
           printf("\n denumirea cartii:");
           gets(wnume);
           cout<<"\n numele autorului:";
           cin>>wautor1;
           cout<<"\n prenumele autorului:";
           cin>>wautor2;
           cout<<"\n editura:";
           cin>>weditura;
           cout<<"\n nr. pagini:";
           cin>>wnrpag;
           cout<<"\n pret:";
           cin>>wpret;

           FisaLibrarie fisa(wnume,wautor1,wautor2,weditura,&wnrpag,&wpret);
           fisa.afiseaza_Libraria();

           cout<<"\n continuati?(d/n):";
           cin>>r;

        }

  }
