//funkcja zdobywania poziomów
#include<iostream>
#include "GOTHIC_GAME_postac.h"
using namespace std;

int expienie(postac *dobry, postac *zly)
{
	dobry->exp += zly->exp; 															//zdobywanie expa
	cout<<"Zdobyleœ "<<zly->exp<<" expa ("<<dobry->exp<<"/"<<dobry->exp_lvl<<")"<<endl
		<<"--------------------------------"<<endl;
	if(dobry->exp>=dobry->exp_lvl)														//zdobycie poziomu
	{
		dobry->exp = 0;
		dobry->lvl++;
		cout<<"KOLEJNY POZIOM ("<<dobry->lvl<<")"<<endl;
		dobry->exp_lvl = dobry->exp_lvl + 125 * dobry->lvl;								//ile expa potrzeba do kolejnego poziomu
		cout<<"Jesteœ teraz o wiele silniejszy"<<endl
			<<"----------------------------------"<<endl;
		dobry->hp += 12;																//wzrost statystyk
		dobry->dmg += 10;
	}
}
