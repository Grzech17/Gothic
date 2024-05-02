#include<iostream>
#include"GOTHIC_GAME_item.h"

item::item(std::string nazwa1, int id1, int dmg1, int def1, bool posiadasz1, bool nosisz1)
{
	nazwa = nazwa1;
	id = id1;
	dmg = dmg1;
	def = def1;
	posiadasz = posiadasz1;
	nosisz = nosisz1;
}
