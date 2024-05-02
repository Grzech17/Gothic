#include<iostream>
#include<cstdlib>
#include<time.h>
#include "GOTHIC_GAME_postac.h"
#include "GOTHIC_GAME_item.h"
#include "GOTHIC_GAME_dialog.h"
using namespace std;
postac *wja , *wscierwojad , *wgoblin1 , *wkrwiopijca , *wwilk , *wgoblin2 , *wtopielec , *wpelzacz , *wzebacz , *wcieniostwor , *work1 , *work2 , *wszkielet , *wgomez;
item *wstary_m, *wniewykonczony_m, *wcwiekowana_m, *wmorgensztern, *wdlugi_m, *wmiecz_n, *wgruchotacz, *wzardzewialy_m, *wdwureczniak, *wtopor_w, *wgniew_i, *wuriziel, *wspodnie_k, *wstroj_c, *wzbroja_s, *wciezka_z, *wzbroja_p, *wstarozytna_z;
dialog *wgomez1, *wgomez2, *wgomez3, *wgomez4, *wgomez5;
int loot = 0, koniec = 0, pogadane = 0, quest = 0, nek = 0, zadlo = 0;
bool zrobione = 0;
int start();
int teren();

int main()
{
	setlocale(LC_ALL, "polish");								//polskie znaki
	srand(time(NULL));									//liczby pseudolosowe
	item stary_m		("Stary Miecz"			, 18, 12 , 0 , 1, 0);		//zbiór itemów (id, dmg, def, masz, nosisz)
	item niewykonczony_m	("Niewykończony Miecz"		, 1 , 20 , 0 , 1, 0);
	item cwiekowana_m	("Ćwiekowana Maczuga"		, 2 , 25 , 0 , 0, 0);
	item morgensztern	("Morgensztern"			, 3 , 35 , 0 , 0, 0);
	item dlugi_m		("Długi Miecz"			, 4 , 40 , 0 , 0, 0);
	item miecz_n		("Miecz Nienawiści"		, 5 , 44 , 0 , 0, 0);
	item gruchotacz		("Gruchotacz"			, 6 , 53 , 0 , 0, 0);
	item zardzewialy_m	("Zardzewiały Miecz Oburęczny"	, 7 , 61 , 0 , 0, 0);
	item dwureczniak	("Dwuręczniak"			, 8 , 81 , 0 , 0, 0);
	item topor_w		("Topór Wojenny"		, 9 , 94 , 0 , 0, 0);
	item gniew_i		("Gniew Innosa"			, 10, 110, 0 , 0, 0);
	item uriziel		("Uriziel"			, 11, 150, 0 , 0, 0);
	item spodnie_k		("Spodnie Kopacza"		, 12, 0  , 15, 1, 0);
	item stroj_c		("Strój Cienia"			, 13, 0  , 30, 1, 0);
	item zbroja_s		("Zbroja Strażnika"		, 14, 0  , 55, 0, 0);
	item ciezka_z		("Ciężka Zbroja Strażnika"	, 15, 0  , 70, 0, 0);
	item zbroja_p		("Zbroja z Pancerzy Pełzaczy"	, 16, 0  , 80, 0, 0);
	item starozytna_z	("Starożytna Zbroja Magiczna"	, 17, 0  , 95, 0, 0);
												//wskaźniki do itemów	
	wstary_m = &stary_m;
	wniewykonczony_m = &niewykonczony_m;
	wcwiekowana_m = &cwiekowana_m;
	wmorgensztern = &morgensztern;
	wdlugi_m = &dlugi_m;
	wmiecz_n = &miecz_n;
	wgruchotacz = &gruchotacz;
	wzardzewialy_m = &zardzewialy_m;
	wdwureczniak = &dwureczniak;
	wtopor_w = &topor_w;
	wgniew_i = &gniew_i;
	wuriziel = &uriziel;
	wspodnie_k = &spodnie_k;
	wstroj_c = &stroj_c;
	wzbroja_s = &zbroja_s;
	wciezka_z = &ciezka_z;
	wzbroja_p = &zbroja_p;
	wstarozytna_z = &starozytna_z;

	postac ja		("Ja"			, 40 , 10 , 0  , 0  , 0, 250, 0, 0);	//zbiór postaci (hp, dmg, def, exp, exp do lvl, id bron, id pancerz)
	postac scierwojad	("Ścierwojad"		, 40 , 8  , 9  , 50 , 0, 0, 0, 0);
	postac goblin1		("Goblin"		, 40 , 25 , 15 , 60 , 0, 0, 0, 0);
	postac krwiopijca	("Krwiopijca"		, 50 , 30 , 15 , 70 , 0, 0, 0, 0);
	postac wilk 		("Wilk"			, 80 , 40 , 20 , 90 , 0, 0, 0, 0);
	postac goblin2		("Czarny Goblin"	, 80 , 55 , 40 , 120, 0, 0, 0, 0);
	postac topielec		("Topielec"		, 90 , 50 , 50 , 170, 0, 0, 0, 0);
	postac pelzacz		("Pełzacz"		, 90 , 65 , 55 , 130, 0, 0, 0, 0);
	postac zebacz		("Zębacz"		, 160, 80 , 40 , 220, 0, 0, 0, 0);
	postac cieniostwor	("Cieniostwór"		, 200, 110, 100, 400, 0, 0, 0, 0);
	postac ork1		("Ork Zwiadowca"	, 200, 30 , 50 , 180, 0, 0, 0, 0);
	postac ork2		("Ork Wojownik"		, 210, 55 , 60 , 250, 0, 0, 0, 0);
	postac szkielet		("Szkielet Wojownik"	, 300, 130, 50 , 300, 0, 0, 0, 0);
	postac gomez		("Gomez"		, 160, 50 , 55 , 999, 99, 0, 0, 0);
												//wskaźniki do postaci
	wja = &ja;
	wscierwojad = &scierwojad;
	wgoblin1 = &goblin1;
	wkrwiopijca = &krwiopijca;
	wwilk = &wilk;
	wgoblin2 = &goblin2;
	wtopielec = &topielec;
	wpelzacz = &pelzacz;
	wzebacz = &zebacz;
	wcieniostwor = &cieniostwor;
	work1 = &ork1;
	work2 = &ork2;
	wszkielet = &szkielet;
	wgomez = &gomez;
	
	dialog gomez1("Z Y'Berionem\n", 0);							//zbiór dialogów (dot. rozmowy z Gomezem)
	wgomez1 = &gomez1;																
	dialog gomez2("Z Cor Calomem\n", 0);							//tekst, czy kwestia została powiedziana
	wgomez2 = &gomez2;
	dialog gomez3("Z Lee\n", 0);
	wgomez3 = &gomez3;
	dialog gomez4("Z Laresem\n", 0);
	wgomez4 = &gomez4;
	dialog gomez5("To już wszyscy, z tych ważniejszych\n", 0);
	wgomez5 = &gomez5;
	start();
	cin.ignore();
}

