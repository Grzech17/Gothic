//lokacje - Kopalnia; Kotlina
#include<iostream>
#include "GOTHIC_GAME_postac.h"
#include "GOTHIC_GAME_item.h"
using namespace std;
extern postac *wja, *wscierwojad, *wgoblin1, *wgoblin2;
extern item *wstary_m, *wniewykonczony_m;
extern int loot, nek;
int mech(postac *dobry, postac *zly, bool musisz = 0);
int zaloz_bron(item *eq);
int kopalnia()
{
	
	cout<<"Wszedleś na teren Opuszczonej Kopalni"<<endl
		<<"------------------"<<endl;
	cin.ignore(); cin.ignore();
		if(loot == 0)												//znalezienie miecza
	{
		loot++;
		cout<<"Aha, chyba coś znalazłem"<<endl
			<<"*Podniosłeś "<<wstary_m->nazwa<<"*"<<endl;
		zaloz_bron(wstary_m);
	}
	mech(wja, wscierwojad);												//przeciwnicy
	mech(wja, wscierwojad);
	mech(wja, wgoblin1);
	cout<<"Wyczyściłeś spota"<<endl
		<<"------------------"<<endl;
	cin.ignore();
}
int kotlina()
{
	cout<<"Wszedłeś do Kotliny niedaleko Starego Obozu"<<endl
		<<"---------------------------------------------"<<endl;
	cin.ignore(); cin.ignore();
	mech(wja, wscierwojad);												//przeciwnicy
	mech(wja, wgoblin1);
	mech(wja, wgoblin1);
	if(nek==0)													//quest - nek->zły
	{
		cout<<"*Skanując obszar znalazłeś wejście do jaskinii*"<<endl
			<<"Wchodzisz? (0-1)"<<endl
			<<"------------------------------------------------------------"<<endl;
		bool decyzja;
		cin>>decyzja;
		if(decyzja)
		{
			cout<<"*Zostajesz zaskoczony przez Gobliny*"<<endl;
			cin.ignore();
			mech(wja, wgoblin1, 1);
			mech(wja, wgoblin1, 1);
			mech(wja, wgoblin1, 1);
			cout<<"W głębi jaskinii leży Martwy Strażnik"<<endl;
			cin.ignore();
			cout<<"*Przeszukujesz ciało*";
			cin.ignore();
			cout<<"Aha, chyba coś znalazłem"<<endl
				<<"*Podniosłeś "<<wniewykonczony_m->nazwa<<"*"<<endl;
			zaloz_bron(wniewykonczony_m);
			cout<<"*Rabujesz amulet z napisem NEK*"<<endl;
			cin.ignore();
			nek = 1;
		}
	}
	
}
