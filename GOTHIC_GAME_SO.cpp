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
		cout<<"Ty: Czy nie zagin�� Wam ostatnio stra�nik?";
		cin.ignore();
		cout<<"Z�y: Mo�e... a co ci do tego?";
		cin.ignore();
		cout<<"Ty: Znalaz�em Neka.";
		cin.ignore();
		cout<<"Z�y: To �wietnie, a masz na to jakie� dowody?";
		cin.ignore();
		cout<<"Ty: Znalaz�em przy nim ten amulet. Prosz�, oto on.";
		cin.ignore();
		cout<<"Z�y: W�a�nie o ten amulet mi chodzi�o. M�dry z ciebie ch�opak. Jakby Diego pyta� o ciebie, opowiem si� za tob�.";
		PlaySound("DIA_STT_315_LOSTNEKSUCCESS_PROOF_10_01.wav", NULL, SND_ASYNC);
		cin.ignore();
		expienie(wja, work2);
		nek = 2;
	}
	if(zadlo == 3)
	{
		cout<<"Dexter: Hej ty! Mam dla ciebie ofert� nie do odrzucenia. Za te ��d�a co masz przy sobie, mog� da� Ci tak� zbroj� prawie tak� sam� jak moja. Co ty na to?"<<endl
			<<"1. Dobrze, Panie."<<endl
			<<"0. P�a� rud� albo zje�dzaj."<<endl;
		bool tak;
		cin>>tak;
		if(tak)
		{
			cout<<"Dexter: Trafi�a Ci si� nie lada okazja ;)";
			PlaySound("STT_311_FISK_WHISTLERSSWORD_TAKEIT_12_01.wav", NULL, SND_ASYNC);
			cin.ignore(); cin.ignore();
			zaloz_pancerz(wspodnie_k);
			zadlo = 4;
			expienie(wja, work2);
		}
		else
		{
			cout<<"Dexter: B�dziesz tego �a�owa�...";
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
			cout<<"Diego: Aby przej�� test zaufania, musisz zabi� 2 wilki... Co� tam m�wi�?"<<endl
			    <<"1. Ty pijawko!"<<endl
			    <<"2. Brzmi strasznie przyjemnie"<<endl;
			cin>>decyzja;
			if(decyzja == 1) poprawny = 1;
			else if(decyzja == 2) poprawny = 1;
		}
		while(!poprawny);
		if(decyzja == 1)
		{
			cout<<"Diego: By�oby dla ciebie lepiej gdyby� tego nie zrobi�... A teraz precz!"<<endl
				<<"-----------------------"<<endl;
			pogadane = 3;
			cin.ignore(); cin.ignore();
		}
		else
		{
			cout<<"Diego: No... Tylko nie marud� za d�ugo"<<endl
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
		cout<<"Diego: Dobra robota... Zaczynasz mi si� naprawd� podoba� ;)"<<endl;
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
		cout<<"Diego: Odejd�... Nie wolno ci ze mn� rozmawia�"<<endl;
		cout<<"---------------------------------------"<<endl;
		cin.ignore();
	}
}
