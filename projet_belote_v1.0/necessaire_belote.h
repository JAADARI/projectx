#pragma once
void new_game();
void best_score();
void  add_score(int score_winner,std::string winner_name);
int dict_atout(int card);
int dict_non_atout(int card);
void distribuer(int player_random, int & cards, char& nom_joueur, int& card_west, int& card_north, int& card_east,  int& card_joueur);
void melanger(int & tab,int taille);
char dict_num_to_char(int card);
