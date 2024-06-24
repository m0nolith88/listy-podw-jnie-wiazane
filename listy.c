#include <stdio.h>
#include <stdlib.h>

struct lista{
  int dane;
  struct lista *poprzednia;
  struct lista *nastepna;
};

struct lista utworz(int liczba){
  struct lista *n = (struct list*) malloc(sizeof(struct lista));
  if(n){
   n->dane=liczba;
   n->poprzednia = NULL;
   n->nastepna = NULL;
  }
  return *n;
}

struct lista dodajDoPoprzedzajacej(struct lista *n,int wartosc){
  if(n->poprzednia==NULL){
    n->poprzednia = (struct list*) malloc(sizeof(struct lista));
    n->poprzednia->poprzednia == NULL;
    n->poprzednia->nastepna == NULL;
    n->poprzednia->dane = wartosc;
  } else {
    n->poprzednia->dane = wartosc;
  }
  return *n->poprzednia;
}

struct lista dodajDoNastepnej(struct lista *n,int wartosc){
  if(n->nastepna==NULL){
    n->nastepna = (struct list*) malloc(sizeof(struct lista));
    n->nastepna->poprzednia == NULL;
    n->nastepna->nastepna == NULL;
    n->nastepna->dane = wartosc;
  } else {
    n->nastepna->dane = wartosc;
  }
  return *n->nastepna;
}

void pushUp(struct lista *n){
}

void pushBack(struct lista *n){
}

void usunPrzod(struct lista *n){
  if(n->nastepna!=NULL){
    n->nastepna=NULL;
  }
  free(n->nastepna);
}

void usunTyl(struct lista *n){
  if(n->poprzednia!=NULL){
    n->poprzednia=NULL;
  }
  free(n->poprzednia);
}



struct lista odczytajCalaListe(){
}

void calaListe(struct lista *n){
  printf("%d \n",n->dane);
  if(n->nastepna!=NULL){
    calaListe(n->nastepna); 
  }
  if(n->poprzednia!=NULL){
    calaListe(n->poprzednia);
  } 
}

int main(int argc,char *argv[]){
  struct lista nowa = utworz(10);
  struct lista poprzednia = dodajDoPoprzedzajacej(&nowa,14);
  struct lista nastepna = dodajDoNastepnej(&nowa,88);
  calaListe(&nowa);
  usunPrzod(&nowa);
  calaListe(&nowa);
  usunTyl(&nowa);
  calaListe(&nowa);
  return 0;
}
