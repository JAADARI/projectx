#include<iostream>
#include<string>
using namespace std;


int dictionnaire_non_atout(int card){

	int result = 0;

	switch(card){
		
		case 1 :
		result = 0; //7
		break;
		case 2 :
		result = 0; //8
		break;
		case 3 :
		result = 0; //9
		break;
		case 4 :
		result = 10; //10
		break;
		case 5 :
		result = 2; // valet
		break;
		case 6 :
		result = 3; // dame
		break;
		case 7 :
		result = 4; // roi
		break;
		case 8 :
		result = 11; // as
		break;

		case 9 :
		result = 0;
		break;
		case 10 :
		result = 0;
		break;
		case 11 :
		result = 0;
		break;
		case 12 :
		result = 10;
		break;
		case 13 :
		result = 2;
		break;
		case 14 :
		result = 3;
		break;
		case 15 :
		result = 4;
		break;
		case 16 :
		result = 11;
		break;

		case 17 :
		result = 0;
		break;
		case 18 :
		result = 0;
		break;
		case 19 :
		result = 0;
		break;
		case 20 :
		result = 10;
		break;
		case 21 :
		result = 2;
		break;
		case 22 :
		result = 3;
		break;
		case 23 :
		result = 4;
		break;
		case 24 :
		result = 11;
		break;

		case 25 :
		result = 0;
		break;
		case 26 :
		result = 0;
		break;
		case 27 :
		result = 0;
		break;
		case 28 :
		result = 10;
		break;
		case 29 :
		result = 2;
		break;
		case 30 :
		result = 3;
		break;
		case 31 :
		result = 4;
		break;
		case 32 :
		result = 11;
		break;
		
		default:
		result = 0;
		break;
	}

	 

	return result;
}