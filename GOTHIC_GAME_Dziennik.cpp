//dziennik zada�
#include<iostream>
using namespace std;
extern int pogadane, quest, nek, zadlo;
int dziennik()
{
	cout<<"Do zrobienia:"<<endl;
	if(pogadane == 3 && quest >=2 && nek == 2 && zadlo ==4) cout<<"Jestem got�w aby spotka� si� z Gomezem w jego Zamku."<<endl;
	if(pogadane == 1 || pogadane == 0 || nek==0 || nek==1 || zadlo !=4) cout<<"Chc� do��czy� do ludzi Gomeza ale zanim p�jd� do Zamku, musz� pozwiedza� lokacje i zrobi� par� quest�w."<<endl;
	if(pogadane == 1 && quest < 2) cout<<"Diego: Aby przej�� test zaufania, musz� zabi� 2 wilki"<<endl;
	if(zadlo == 3) cout<<"Zebralem nieco ��de�. Mo�e uda mi si� je sprzeda� w Starym Obozie"<<endl;
	if(nek == 1) cout<<"Znalaz�em martwego stra�nika w jaskinii niedaleko Starego Obozu. Jako dow�d zabra�em ze sob� jego naszyjnik. Mam nadziej�, �e dostan� za to jak�� nagrod�."<<endl;
	cout<<"---------------------------------------------------------------------------------------------------------"<<endl
		<<"Wykonane zadania:"<<endl;
	if(pogadane == 3 && quest >=2) cout<<"Diego wygl�da� na zadowolonego, a w ramach nagrody poklepa� mnie po ramieniu!"<<endl;
	if(zadlo==4) cout<<"Sprzeda�em ��d�a za Spodnie Kopacza u Dextera... My�l�, �e to uczciwa cena."<<endl;
	if(nek == 2) cout<<"Stwierdzi�em, �e udam si� do Z�ego - jednego z Cieni. By� bardzo zadowolony cho� nie wydaje mi si�, �e z informacji, a z amuletu. W nagrod� otrzyma�em *dobre* s�owo..."<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------"<<endl
		<<"Zepsute zadania:"<<endl;
	if(pogadane == 3 && quest == 0 && zadlo == 5) cout<<"Z tak� reputacj� nie mam szans na zostanie pupilkiem Gomeza"endl;
	if(pogadane ==3 && quest == 0) cout<<"Nie b�d� robi� dla tego z�odzieja Gomeza i jego kumpli"<<endl;
	if(zadlo==5) cout<<"Dexter my�la�, �e trafi� na frajera"<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
	cin.ignore(); cin.ignore();
}
