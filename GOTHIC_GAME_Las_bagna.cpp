#include<iostream>
#include "GOTHIC_GAME_postac.h"
using namespace std;
extern postac *wja, *wgoblin1, *wkrwiopijca, *wwilk;
int mech(postac *dobry, postac *zly, bool musisz = 0);

int las()
{
	cout<<"Wszed�es do Lasu"<<endl
		<<"------------------"<<endl;
	cin.ignore(); cin.ignore();
	mech(wja, wkrwiopijca);										//przeciwnicy
	mech(wja, wwilk);
	mech(wja, wwilk);
	cout<<"Wyczy�ci�e� spota"<<endl
		<<"------------------"<<endl;
	cin.ignore();
}
int bagna()
{
	cout<<"Wszed�e� na Bagna"<<endl
		<<"-------------------"<<endl;
	cin.ignore();
	mech(wja, wkrwiopijca);										//przeciwnicy
	mech(wja, wkrwiopijca);
	mech(wja, wkrwiopijca);
		cout<<"Wyczy�ci�e� spota"<<endl
			<<"------------------"<<endl;
	cin.ignore();
}
