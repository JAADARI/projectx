#include<iostream>
using namespace std;

void distribuer(int player_random, int & cards, char& nom_joueur, int& card_west, int& card_north, int& card_east,  int& card_joueur){
	char rep;

cout<<"debut de distribution des cards"<<endl;

if(player_random==5){player_random=1;}

	switch(player_random){
		case 1:
			// Joueur
            
			cout<<nom_joueur<<" distribuer"<<endl;

			// Joueur distribue en 1er a Ouest -> Nord -> Est -> Joueur
			
			for(int i = 0; i < 3; i++){
				card_west[i]   = cards[i];
				card_north[i]  = cards[i+3];
				card_east[i]   = cards[i+6];
				card_joueur[i] = cards[i+9];
			}

			for(int i = 3; i < 5; i++){
				card_west[i]   = cards[i+9];
				card_north[i]  = cards[i+11];
				card_east[i]   = cards[i+13];
				card_joueur[i] = cards[i+15];
			}
			

			for(int i = 5; i < 8; i++){
				card_west[i]   = cards[i+15];
				card_north[i]  = cards[i+18];
				card_east[i]   = cards[i+21];
				card_joueur[i] = cards[i+24];		
			}

			break;
		case 2:
			 // Ouest

			cout<<"Ouest distribue "<<endl;

			for(int i = 0; i < 3; i++){
				card_north[i]  = cards[i];
				card_east[i]  = cards[i+3];
				card_joueur[i] = cards[i+6];
				card_west[i]   = cards[i+9];
			}
			
			for(int i = 3; i < 5; i++){
				card_north[i] = cards[i+9];
				card_east[i]   = cards[i+11];
				card_joueur[i] = cards[i+13];
				card_west[i]   = cards[i+15];
			}
			
			for(int i = 5; i < 8; i++){
				card_north[i]  = cards[i+15];
				card_east[i]   = cards[i+18];
				card_joueur[i] = cards[i+21];
				card_west[i]]   = cards[i+24];		
			}

			break;
		case 3:
			 // Nord
            cout<<"Nord distribue"<<endl;
			for(int i = 0; i < 3; i++){
				card_east[i]   = cards[i];
				card_joueur[i] = cards[i+3];
				card_west[i]   = cards[i+6];
				card_north[i]  = cards[i+9];
			}

			for(int i = 3; i < 5; i++){
				card_east[i]   = cards[i+9];
				card_joueur[i] = cards[i+11];
				card_west[i]   = cards[i+13];
				card_north[i]  = cards[i+15];
			}

			for(int i = 5; i < 8; i++){
				card_east[i]   = cards[i+15];
				card_joueur[i] = cards[i+18];
				card_west[i]   = cards[i+21];
				card_north[i]  = cards[i+24];		
			}

			break;
		case 4:
			 // Est
            cout<<"Est distribue"<<endl;

			for(int i = 0; i < 3; i++){
				card_joueur[i] = cards[i];
				card_west[i]  = cards[i+3];
				card_north[i]  = cards[i+6];
				card_east[i]   = cards[i+9];
			}

			for(int i = 3; i < 5; i++){
				card_joueur[i] = cards[i+9];
				card_west[i]   = cards[i+11];
				card_north[i]  = cards[i+13];
				card_east[i]   = cards[i+15];
			}
			cout<<"tu prends "<<cards[20]<<"comme atout Mr" << nom_joueur << "?"<<endl;
			cout<<"Y / N"<<endl;
			cin>>rep;
			if(rep=="Y"){
				card_joueur[5]=cards[20]
				card_joueur[6]=card[24]
				card_joueur[7]=cards[28]
			}
			else{
				//en faire le meme pour chaque joueur si tt nn en redistribuer
			}

			for(int i = 5; i < 8; i++){
			
				card_west[i]   = cards[i+18];
				card_north[i]  = cards[i+21];
				card_east[i]   = cards[i+24];		
			}

			break;
		default:
			cout<<"remplacer le distribuer: "<<player_random<<endl;
			break;
	}
}



