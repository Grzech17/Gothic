#include<iostream>
#include "GOTHIC_GAME_postac.h"
#include "GOTHIC_GAME_item.h"
#include<windows.h>
using namespace std;
extern int pogadane, quest, nek, zadlo;
extern bool zrobione;
extern postac *wja, *work2;
extern item *wspodnie_k;
int teren();
int expienie(postac *dobry, postac *zly);
int zaloz_pancerz(item *eq);
int so()
{
		cout<<"Wszedles do Starego Obozu"<<endl
			<<"------------------"<<endl;
		cin.ignore(); cin.ignore();
	if(nek == 1)
	{
		cout<<"Ty: Czy nie zagin¹³ Wam ostatnio stra¿nik?";
		cin.ignore();
		cout<<"Z³y: Mo¿e... a co ci do tego?";
		cin.ignore();
		cout<<"Ty: Znalaz³em Neka.";
		cin.ignore();
		cout<<"Z³y: To œwietnie, a masz na to jakieœ dowody?";
		cin.ignore();
		cout<<"Ty: Znalaz³em przy nim ten amulet. Proszê, oto on.";
		cin.ignore();
		cout<<"Z³y: W³aœnie o ten amulet mi chodzi³o. M¹dry z ciebie ch³opak. Jakby Diego pyta³ o ciebie, opowiem siê za tob¹.";
		PlaySound("DIA_STT_315_LOSTNEKSUCCESS_PROOF_10_01.wav", NULL, SND_ASYNC);
		cin.ignore();
		expienie(wja, work2);
		nek = 2;
	}
	if(zadlo == 3)
	{
		cout<<"Dexter: Hej ty! Mam dla ciebie ofertê nie do odrzucenia. Za te ¿¹d³a co masz przy sobie, mogê daæ Ci tak¹ zbrojê prawie tak¹ sam¹ jak moja. Co ty na to?"<<endl
			<<"1. Dobrze, Panie."<<endl
			<<"0. P³aæ rud¹ albo zje¿dzaj."<<endl;
		bool tak;
		cin>>tak;
		if(tak)
		{
			cout<<"Dexter: Trafi³a Ci siê nie lada okazja ;)";
			PlaySound("STT_311_FISK_WHISTLERSSWORD_TAKEIT_12_01.wav", NULL, SND_ASYNC);
			cin.ignore(); cin.ignore();
			zaloz_pancerz(wspodnie_k);
			zadlo = 4;
			expienie(wja, work2);
		}
		else
		{
			cout<<"Dexter: Bêdziesz tego ¿a³owa³...";
			cin.ignore(); cin.ignore();
			zadlo = 5;
		}
	}
	if(pogadane == 0)
	{

		int decyzja;
		bool poprawny;
		do
		{
			cout<<"Diego: Aby przejœæ test zaufania, musisz zabiæ 2 wilki... Coœ tam mówi³?"<<endl
			    <<"1. Ty pijawko!"<<endl
			    <<"2. Brzmi strasznie przyjemnie"<<endl;
			cin>>decyzja;
			if(decyzja == 1) poprawny = 1;
			else if(decyzja == 2) poprawny = 1;
		}
		while(!poprawny);
		if(decyzja == 1)
		{
			cout<<"Diego: By³oby dla ciebie lepiej gdybyœ tego nie zrobi³... A teraz precz!"<<endl
				<<"-----------------------"<<endl;
			pogadane = 3;
			cin.ignore(); cin.ignore();
		}
		else
		{
			cout<<"Diego: No... Tylko nie marudŸ za d³ugo"<<endl
				<<"---------------------------------------"<<endl;
			pogadane = 1;
			
			cin.ignore(); cin.ignore();
		}
	}
	else if(pogadane == 1 && quest < 2)
	{
		cout<<"Diego: Bierz sie do roboty albo dostaniesz kopa"<<endl
			<<"---------------------------------------"<<endl;
		cin.ignore();
	}
	else if(pogadane == 1 && quest >=2)
	{
		cout<<"Diego: Dobra robota... Zaczynasz mi siê naprawdê podobaæ ;)"<<endl;
		PlaySound("INFO_DIEGO_BRINGLIST_SUCCESS_11_01.wav", NULL, SND_ASYNC);
		cin.ignore(); 
		expienie(wja, work2);
		cin.ignore();
		pogadane = 3;
		zrobione = 1;
		cout<<"---------------------------------------"<<endl;
	}
	else 
	{
		cout<<"Diego: OdejdŸ... Nie wolno ci ze mn¹ rozmawiaæ"<<endl;
		cout<<"---------------------------------------"<<endl;
		cin.ignore();
	}
}
