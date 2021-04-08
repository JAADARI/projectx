#include <bits/stdc++.h>
#include "necessaire_belote.h"
using namespace std;
void menu()
{
    int choix=0;
    cout<<"votre choix :";
    cin>>choix;
    while(choix>=1||choix<=3)
    {
        switch (choix) {
            case 1:
                new_game();
                break;
            case 2:
                best_score();
                break;
            case 3:
                exit(0);
                break;
            default:
                cout<<"erreur de choix"<<endl;
        }
    }
}