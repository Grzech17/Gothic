#include<iostream>
#include "GOTHIC_GAME_postac.h"
using namespace std;
extern postac *wja, *wgoblin1, *wkrwiopijca, *wwilk;
int mech(postac *dobry, postac *zly, bool musisz = 0);

int las()
{
	cout<<"Wszedłes do Lasu"<<endl
		<<"------------------"<<endl;
	cin.ignore(); cin.ignore();
	mech(wja, wkrwiopijca);										//przeciwnicy
	mech(wja, wwilk);
	mech(wja, wwilk);
	cout<<"Wyczyściłeś spota"<<endl
		<<"------------------"<<endl;
	cin.ignore();
}
int bagna()
{
	cout<<"Wszedłeś na Bagna"<<endl
		<<"-------------------"<<endl;
	cin.ignore();
	mech(wja, wkrwiopijca);										//przeciwnicy
	mech(wja, wkrwiopijca);
	mech(wja, wkrwiopijca);
		cout<<"Wyczyściłeś spota"<<endl
			<<"------------------"<<endl;
	cin.ignore();
}
