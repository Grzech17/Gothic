#include<iostream>
#include<fstream>
#include<cstdlib>
#include "GOTHIC_GAME_postac.h"
using namespace std;
extern postac *wja;
extern int loot, koniec, pogadane, quest, nek, zadlo;
extern bool zrobione, zasadzka;

int zapisz()
{
	ofstream pisz;
	pisz.open("save.txt");
	pisz<<wja->hp<<""<<endl
		<<wja->dmg<<""<<endl
		<<wja->def<<""<<endl
		<<wja->exp<<""<<endl
		<<wja->lvl<<""<<endl
		<<wja->exp_lvl<<""<<endl
		<<loot<<""<<endl
		<<koniec<<""<<endl
		<<pogadane<<""<<endl
		<<quest<<""<<endl
		<<zrobione<<""<<endl
		<<nek<<""<<endl
		<<zadlo<<""<<endl
		<<wja->bron<<""<<endl
		<<wja->pancerz<<""<<endl;
	pisz.close();
	cout<<"Poprawnie zapisano Grê"<<endl;
}
int wczytaj()
{
	ifstream czyt;
	czyt.open("save.txt", ios::in);
	if(czyt.good()==false)
	{
		cout<<"Plik nie istnieje!\n";
		cin.ignore();
		cin.get();
		exit(0);
	}
	else
	{
	string linia;
	int nr_linii=1;
	while(getline(czyt, linia))
	{
		switch(nr_linii)
		{
			case 1: wja->hp = atoi(linia.c_str()); break;
			case 2: wja->dmg = atoi(linia.c_str()); break;
			case 3: wja->def = atoi(linia.c_str()); break; 
			case 4: wja->exp = atoi(linia.c_str()); break; 
			case 5: wja->lvl = atoi(linia.c_str()); break; 
			case 6: wja->exp_lvl = atoi(linia.c_str()); break; 
			case 7: loot = atoi(linia.c_str()); break;
			case 8: koniec = atoi(linia.c_str()); break; 
			case 9: pogadane = atoi(linia.c_str()); break; 
			case 10: quest = atoi(linia.c_str()); break; 
			case 11: zrobione = atoi(linia.c_str()); break;
			case 12: nek = atoi(linia.c_str()); break;
			case 13: zadlo = atoi(linia.c_str()); break;
			case 14: wja->bron = atoi(linia.c_str()); break;
			case 15: wja->pancerz = atoi(linia.c_str()); break;
		}
		nr_linii++;
	}
	if(czyt.eof()) cout<<"Poprawnie wczytano Grê"<<endl;
	else cout<<"ACCES VIOLATION"<<endl;
	czyt.close();
	}
}
