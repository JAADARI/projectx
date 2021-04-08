#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
void new_game() {
    int cards[32] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27,
                     28, 29, 30, 31, 32};
    int cards_size = size(cards);
    int joueur_cards[8] = {0};
    int east_cards[8] = {0};
    int north_cards[8] = {0};
    int west_cards[8] = {0};
    string player_name;
    int player_random = rand() % 4 + 1;
    cout << "new Game" << endl;
    cout << "please enter your name" << endl;
    cin >> player_name;
    cout << "Be Ready " << player_name << endl;
    melanger(cards, cards_size);
    pause;
    distrubier(player_random, cards, player_name, west_cards, north_cards, east_cards, joueur_cards);
    pause;
    //le projet n'est pas encore terminer il existe ici des fonction de deroulement du jeu
}




