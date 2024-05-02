#include<iostream>
#include"GOTHIC_GAME_item.h"
#include "GOTHIC_GAME_postac.h"
using namespace std;
extern item *zbrojownia[];
int ekwipunek()
{
	cout<<"Twoje bronie:\n";
	for(int i=0; i<100; i++)
	{
		cout<<zbrojownia[i]->nazwa; 
	}
}
