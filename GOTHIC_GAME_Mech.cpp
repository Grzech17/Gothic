//system walki
#include<iostream>
#include<cstdlib>
#include "GOTHIC_GAME_postac.h"
using namespace std;
extern int koniec, czystka, quest, pogadane, zadlo;
int expienie(postac *dobry, postac *zly);
int mech(postac *dobry, postac *zly, bool musisz = 0)											
{
	int hp = dobry->hp;																			//do wyleczenia postaci
	int reset = zly->hp; 																		//do wyleczenia przeciwnika
	cout<<"Spotykasz "<<zly->nazwa<<"a"<<endl													
	    <<dobry->nazwa<<": HP-"<<dobry->hp<<" DMG-"<<dobry->dmg<<" DEF-"<<dobry->def<<""<<endl
	    <<zly->nazwa<<": HP-"<<zly->hp<<" DMG-"<<zly->dmg<<" DEF-"<<zly->def<<""<<endl;
	bool poprawny;
	int atakujesz;
	if(musisz == 0)																				
	{
		do
		{
			cout<<"Atakujesz? (0-1)"<<endl;
			cin>>atakujesz;
			if(atakujesz==0) poprawny = 1;
			else if(atakujesz==1) poprawny = 1;
			else poprawny = 0;
		}while(!poprawny);
	}
	else atakujesz = 1;
	if(atakujesz == 1)
	{
		cout<<"Wyci�gasz bro� i szar�ujesz..."<<endl;
		cin.ignore(); cin.ignore();
		while(dobry->hp>0 && zly->hp>0)
		{
			int traf = rand() % 3;																//67% szans na twoje trafienie
			if(traf >= 1)
			{
				if(dobry->dmg<=zly->def)														//je�li tw�j dmg jest mniejszy ni� def przeciwnika
				{
					zly->hp--;																	// -1hp
					cout<<"TRAFIENIE! Smyrn��e� przeciwnika za 1 pkt obra�e�"<<endl
						<<"HP przeciwnika: "<<zly->hp<<""<<endl;
				}
				else
				{
				zly->hp = zly->hp - dobry->dmg + zly->def;										//dmg - def
				cout<<"TRAFIENIE! Zadajesz "<<(dobry->dmg-zly->def)<<" obra�e�"<<endl
				    <<"HP przeciwnika: "<<zly->hp<<""<<endl;
				}
				if(zly->hp<1)																	//zabijasz
				{
					cout<<"Jedna bestia mniej!"<<endl
						<<"-----------------------"<<endl;
					if(pogadane == 1 && zly->nazwa == "Wilk" && quest<2) 						//quest diego na wilki
					{
						quest++;
						cout<<"Zabito "<<quest<<" z 2 Wilk�w"<<endl;
					}
					if(zly->nazwa == "Krwiopijca" && zadlo<3)									//quest dextera na krwiopijce
					{
						zadlo++;
						cout<<"Zebrano ��d�o"<<endl
							<<"Masz "<<zadlo<<" w ekwipunku"<<endl;
					}
					dobry->hp = hp;																//wyleczenie postaci
					if(zly->lvl == 99) koniec = 1;												//�mier� gomeza
					expienie(dobry, zly);														//zdobycie expa
					continue;
				}
			}
			else
			{
				cout<<"CHYBIENIE"<<endl
				    <<"HP przeciwnika: "<<zly->hp<<""<<endl;
			}
			traf = rand() % 2;																	//50% szansa na tw�j unik
			if(traf)
			{
				if(zly->dmg<=dobry->def)
				{
					dobry->hp--;
					cout<<"OUCH! Przeciwnik smyrn�� Ci� za 1 pkt obra�e�"<<endl
						<<"Twoje: "<<dobry->hp<<""<<endl;
				}
				else
				{
				dobry->hp = dobry->hp - zly->dmg + dobry->def;
				cout<<"OUCH! Otrzymujesz "<<(zly->dmg-dobry->def)<<" obra�e�"<<endl
					<<"Twoje HP: "<<dobry->hp<<""<<endl;
				}
				if(dobry->hp<1)																			//twoja �mier�
				{
					cout<<"zdech�e� xd"<<endl;
					cin.ignore();
					cin.get();
					exit(0);
				}
				
			}
			else
			{
				cout<<"BLOK!"<<endl
					<<"Twoje HP: "<<dobry->hp<<""<<endl;
			}
		cin.ignore();
		}
	zly->hp = reset;																					//wyleczenie przeciwnika
	}
	else
		{
			cout<<"St�j, �mieciu!"<<endl
				<<"----------------"<<endl;
			cin.ignore();
		}
}

