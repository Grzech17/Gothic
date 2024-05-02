//dziennik zadañ
#include<iostream>
using namespace std;
extern int pogadane, quest, nek, zadlo;
int dziennik()
{
	cout<<"Do zrobienia:"<<endl;
	if(pogadane == 3 && quest >=2 && nek == 2 && zadlo ==4) cout<<"Jestem gotów aby spotkaæ siê z Gomezem w jego Zamku."<<endl;
	if(pogadane == 1 || pogadane == 0 || nek==0 || nek==1 || zadlo !=4) cout<<"Chcê do³¹czyæ do ludzi Gomeza ale zanim pójdê do Zamku, muszê pozwiedzaæ lokacje i zrobiæ parê questów."<<endl;
	if(pogadane == 1 && quest < 2) cout<<"Diego: Aby przejœæ test zaufania, muszê zabiæ 2 wilki"<<endl;
	if(zadlo == 3) cout<<"Zebralem nieco ¿¹de³. Mo¿e uda mi siê je sprzedaæ w Starym Obozie"<<endl;
	if(nek == 1) cout<<"Znalaz³em martwego stra¿nika w jaskinii niedaleko Starego Obozu. Jako dowód zabra³em ze sob¹ jego naszyjnik. Mam nadziejê, ¿e dostanê za to jak¹œ nagrodê."<<endl;
	cout<<"---------------------------------------------------------------------------------------------------------"<<endl
		<<"Wykonane zadania:"<<endl;
	if(pogadane == 3 && quest >=2) cout<<"Diego wygl¹da³ na zadowolonego, a w ramach nagrody poklepa³ mnie po ramieniu!"<<endl;
	if(zadlo==4) cout<<"Sprzeda³em ¿¹d³a za Spodnie Kopacza u Dextera... Myœlê, ¿e to uczciwa cena."<<endl;
	if(nek == 2) cout<<"Stwierdzi³em, ¿e udam siê do Z³ego - jednego z Cieni. By³ bardzo zadowolony choæ nie wydaje mi siê, ¿e z informacji, a z amuletu. W nagrodê otrzyma³em *dobre* s³owo..."<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------"<<endl
		<<"Zepsute zadania:"<<endl;
	if(pogadane == 3 && quest == 0 && zadlo == 5) cout<<"Z tak¹ reputacj¹ nie mam szans na zostanie pupilkiem Gomeza"endl;
	if(pogadane ==3 && quest == 0) cout<<"Nie bêdê robi³ dla tego z³odzieja Gomeza i jego kumpli"<<endl;
	if(zadlo==5) cout<<"Dexter myœla³, ¿e trafi³ na frajera"<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
	cin.ignore(); cin.ignore();
}
