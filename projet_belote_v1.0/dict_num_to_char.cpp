/*

	dict_num_to_char.cpp : Sert de traducteur pour passer du numérique à la chaîne de caractère
		- On donne un int entre 1 et 32 et on retourne un char 

*/

#include<iostream>
#include<string>
using namespace std;

char dict_num_to_char(int card){
	string result = "val";

	switch(card){
		case 1 :
		result = " 7 "; // Pique
		break;
		case 2 :
		result = " 8 ";
		break;
		case 3 :
		result = " 9 ";
		break;
		case 4 :
		result = "1 0";
		break;
		case 5 :
		result = " V ";
		break;
		case 6 :
		result = " D ";
		break;
		case 7 :
		result = " R ";
		break;
		case 8 :
		result = " A ";
		break;

		case 9 :
		result = " 7 "; // Carreau
		break;
		case 10 :
		result = " 8 ";
		break;
		case 11 :
		result = " 9 ";
		break;
		case 12 :
		result = "1 0";
		break;
		case 13 :
		result = " V ";
		break;
		case 14 :
		result = " D ";
		break;
		case 15 :
		result = " R ";
		break;
		case 16 :
		result = " A ";
		break;

		case 17 :
		result = " 7 "; // Coeur
		break;
		case 18 :
		result = " 8 ";
		break;
		case 19 :
		result = " 9 ";
		break;
		case 20 :
		result = "1 0";
		break;
		case 21 :
		result = " V ";
		break;
		case 22 :
		result = " D ";
		break;
		case 23 :
		result = " R ";
		break;
		case 24 :
		result = " A ";
		break;

		case 25 :
		result = " 7 "; // Trèfle
		break;
		case 26 :
		result = " 8 ";
		break;
		case 27 :
		result = " 9 ";
		break;
		case 28 :
		result = "1 0";
		break;
		case 29 :
		result = " V ";
		break;
		case 30 :
		result = " D ";
		break;
		case 31 :
		result = " R ";
		break;
		case 32 :
		result = " A ";
		break;

		default :
		result = "val";
		break;
	}

	
	return result;
}
