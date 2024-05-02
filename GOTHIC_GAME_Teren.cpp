#include<iostream>
using namespace std;
extern int koniec;
int kopalnia();
int las();
int bagna();
int zamek();
int so();
int dziennik();
int kotlina();
int zapisz();

int teren()
{
	int ide;
	do
	{
		cout<<"A ty gdzie siê wybierasz?"<<endl
			<<"1. Opuszczona Kopalnia"<<endl
			<<"2. Las"<<endl
			<<"3. Stary Oboz - Zewnêtrzny Pierœcieñ"<<endl
			<<"4. Zamek Gomeza"<<endl
			<<"5. Bagna"<<endl
			<<"6. Kotlina"<<endl
			<<"8. Dziennik"<<endl
			<<"9. Zapisz Grê"<<endl;
		cin>>ide;
		switch(ide)
		{
			case(1):
				kopalnia();
				break;
			case(2):
				las();
				break;
			case(3):
				so();
				break;
			case(4):
				zamek();
				break;
			case(5):
				bagna();
				break;
			case(6):
				kotlina();
				break;
			case(8):
				dziennik();
				break;
			case(9):
				zapisz();
				break;
			default:
				break;	
		}
	}
	while(!koniec);
	if(koniec == 1)
	cout<<"Zabi³es go! Teraz Ty jesteœ najpotê¿niejszy w ca³ej Kolonii\nKONIEC GRY";
	else
	cout<<"*Zosta³eœ szanowanym cz³onkiem Starego Obozu*\nKONIEC ROZDZIA£U I";
}
