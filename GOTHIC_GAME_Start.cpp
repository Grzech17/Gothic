#include<iostream>
using namespace std;
int teren();
int wczytaj();
int changelog();
int start()
{
	int menu;
	cout<<"GOTHIC_GAME"<<endl
	    <<"Menu"<<endl
	    <<"1. Nowa Gra"<<endl
	    <<"2. Wczytaj Grê"<<endl
	    <<"3. Wyjœcie"<<endl
	    <<"4. Changelog"<<endl;
	cin>>menu;
	switch(menu)
	{
		case(1):
			cout<<"Jeden cz³owiek, odmieni³ losy wielu setek..."<<endl
				<<"U¿ywaj Entera aby kontynuowaæ"<<endl;
				cout<<"-------------------------"<<endl;
		cin.ignore(); cin.ignore();
		teren();
		cin.ignore();
			break;
		case(2):
			wczytaj();
			teren();
			break;
		case(3):
			cout<<"ALARM! INTRUZ!"<<endl;
			cin.ignore();
			cin.get();
			exit(0);
			break;
		case(4):
			changelog();
			cin.ignore();
			start();
			break;
		default:
			cout<<"nie ze mn¹ te numery..."<<endl;
			cin.ignore();
			cin.get();
			exit(0);
			break;
	}
}
