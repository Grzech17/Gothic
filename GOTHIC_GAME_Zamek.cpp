#include<iostream>
#include "GOTHIC_GAME_postac.h"
#include "GOTHIC_GAME_dialog.h"
#include "GOTHIC_GAME_item.h"
#include <Windows.h>
using namespace std;
extern dialog *wgomez1, *wgomez2, *wgomez3, *wgomez4, *wgomez5;
extern bool zrobione; 
extern int koniec, nek, zadlo;
extern postac *wja, *wgomez;
extern dialog *opcje_gomez;
extern item *wgniew_i, *wstroj_c;
int mech(postac *dobry, postac *zly, bool musisz = 0);
void zaloz_pancerz(item *eq);
int zaloz_bron(item *eq);

int zamek()
{
	if(zrobione && nek == 2 && zadlo == 4)																			//jeœli zrobione questy
	{
		cout<<"Ty: Przychodzê zaoferowaæ swoje us³ugi"<<endl;
		cin.ignore(); cin.ignore();
		cout<<"Gomez: A dlaczego myœlisz, ¿e potrzebujê twoich us³ug?"<<endl;
		cin.ignore();
		cout<<"Ty: Przemierzy³em spor¹ czêœæ kolonii i mam kontakty we wszystkich obozach"<<endl;
		cin.ignore(); 
		cout<<"Gomez: No! To siê mo¿e przydaæ. Z kim konkretnie utrzymujesz kontakty?"<<endl;
		cin.ignore(); 
		do																											//opcje dialogowe z gomezem
		{
			if(wgomez1->powiedziano == 0)
			cout<<"1. "<<wgomez1->tekst;
			if(wgomez2->powiedziano == 0)
			cout<<"2. "<<wgomez2->tekst;
			if(wgomez3->powiedziano == 0)
			cout<<"3. "<<wgomez3->tekst;
			if(wgomez4->powiedziano == 0)
			cout<<"4. "<<wgomez4->tekst;
			if(wgomez5->powiedziano == 0)
			cout<<"5. "<<wgomez5->tekst;
			int decyzja;
			bool poprawny = 0;
			do	
			{
				cin>>decyzja;
				if(decyzja <=5 && decyzja >=1) poprawny = 1;
				int dobrze;
				switch(decyzja)
				{
					case(1):
						cout<<"Z twoich k³amstw wnoszê, ¿e masz mnie za idiotê!"<<endl;
						zrobione = 0;
						mech(wja, wgomez, 1);
						break;
					case(2):
						if(wgomez2->powiedziano) break;
						else
						{
						PlaySound("DIA_GOMEZ_HELLO_KONTAKTE_LARES_11_01.wav", NULL, SND_FILENAME | SND_SYNC);
						dobrze++;
						wgomez2->powiedziano = 1;
						break;
						}
					case(3):
						if(wgomez3->powiedziano) break;
						else
						{
						PlaySound("DIA_GOMEZ_HELLO_KONTAKTE_LARES_11_01.wav", NULL, SND_FILENAME | SND_SYNC);
						dobrze++;
						wgomez3->powiedziano = 1;
						break;
						}
					case(4):
						if(wgomez4->powiedziano) break;
						else
						{
						PlaySound("DIA_GOMEZ_HELLO_KONTAKTE_LARES_11_01.wav", NULL, SND_FILENAME | SND_SYNC);
						dobrze++;
						wgomez4->powiedziano = 1;
						break;
						}
					case(5):
						{
						if(dobrze == 3)
						{
							cout<<"NieŸle... jak na ¿ó³todzioba\nMo¿esz dla mnie pracowaæ"<<endl;
							cin.ignore(); cin.ignore();
							zaloz_pancerz(wstroj_c);
							koniec = 2;
						}
						else
						{
							cout<<"I co? Mam byæ pod wra¿eniem?! Znam Kopaczy, którzy maj¹ lepsze kontakty od ciebie!"<<endl;
							zrobione = 0;
							mech(wja,wgomez, 1);
						}
						break;
						} 
					default: 
					break;
				}
			}
			while(!poprawny);
		}
		while(koniec == 0);
	}	
	else																											//je¿eli questy nie zrobione
	{
		cout<<"*Przebiegasz bokiem przez stra¿ników Zamku z mieczem w rêku*"<<endl;
		cin.ignore(); cin.ignore();
		cout<<"Gomez: Œmiesz tak po prostu tutaj wmaszerowaæ i zawracaæ mi g³owê? Ty gnido! STRA¯!"<<endl;
		PlaySound("DIA_GOMEZ_FAULT_11_01.wav",NULL, SND_FILENAME | SND_NOSTOP);
		cout<<"------------------"<<endl;
		mech(wja, wgomez, 1);
		zaloz_bron(wgniew_i);
	}
}
