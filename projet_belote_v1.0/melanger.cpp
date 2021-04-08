#include<iostream>
using namespace std;

void melanger(int & tab,int taille){
    int random1,random2;
    int aux;

    cout<<"Melange des cartes:"<<endl;
    for(int i=0;i<1000;i++){

        random1=rand()%(taille/2);

        random2=taille-(rand()%(taille/2)+1);

        aux=tab[random1];

        tab[random1]=tab[random2];
        
        tab[random2]=aux;


    }
    cout<<"fin de melanger !"<<endl;

}