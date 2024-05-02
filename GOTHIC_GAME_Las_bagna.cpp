#include<iostream>
#include "GOTHIC_GAME_postac.h"
using namespace std;
extern postac *wja, *wgoblin1, *wkrwiopijca, *wwilk;
int mech(postac *dobry, postac *zly, bool musisz = 0);

int las()
{
	cout<<"Wszed³es do Lasu"<<endl
		<<"------------------"<<endl;
	cin.ignore(); cin.ignore();
	mech(wja, wkrwiopijca);										//przeciwnicy
	mech(wja, wwilk);
	mech(wja, wwilk);
	cout<<"Wyczyœci³eœ spota"<<endl
		<<"------------------"<<endl;
	cin.ignore();
}
int bagna()
{
	cout<<"Wszed³eœ na Bagna"<<endl
		<<"-------------------"<<endl;
	cin.ignore();
	mech(wja, wkrwiopijca);										//przeciwnicy
	mech(wja, wkrwiopijca);
	mech(wja, wkrwiopijca);
		cout<<"Wyczyœci³eœ spota"<<endl
			<<"------------------"<<endl;
	cin.ignore();
}
