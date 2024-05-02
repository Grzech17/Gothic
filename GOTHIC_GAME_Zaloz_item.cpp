#include<iostream>
#include"GOTHIC_GAME_item.h"
#include "GOTHIC_GAME_postac.h"
using namespace std;
extern item *wstary_m, *wniewykonczony_m, *wcwiekowana_m, *wmorgensztern, *wdlugi_m, *wmiecz_n, *wgruchotacz, *wzardzewialy_m, *wdwureczniak, *wtopor_w, *wgniew_i, *wuriziel, *wspodnie_k, *wstroj_c, *wzbroja_s, *wciezka_z, *wzbroja_p, *wstarozytna_z;
extern postac *wja;
int zaloz_bron(item *eq)
{
	if(eq->posiadasz)
	{
		if(wstary_m->id == wja->bron) 
		{
		    wja->def -= wstary_m->def;
		    wja->dmg -= wstary_m->dmg;
		}
		if(wniewykonczony_m->id == wja->bron) 
		{
		    wja->def -= wniewykonczony_m->def;
		    wja->dmg -= wniewykonczony_m->dmg;
		}
		if(wcwiekowana_m->id == wja->bron) 
		{
		    wja->def -= wcwiekowana_m->def;
		    wja->dmg -= wcwiekowana_m->dmg;
		}
		if(wmorgensztern->id == wja->bron) 
		{
		    wja->def -= wmorgensztern->def;
		    wja->dmg -= wmorgensztern->dmg;
		}
		if(wdlugi_m->id == wja->bron) 
		{
		    wja->def -= wdlugi_m->def;
		    wja->dmg -= wdlugi_m->dmg;
		}
		if(wmiecz_n->id == wja->bron) 
		{
		    wja->def -= wmiecz_n->def;
		    wja->dmg -= wmiecz_n->dmg;
		}
		if(wgruchotacz->id == wja->bron) 
		{
		    wja->def -= wgruchotacz->def;
		    wja->dmg -= wgruchotacz->dmg;
		}
		if(wzardzewialy_m->id == wja->bron) 
		{
		    wja->def -= wzardzewialy_m->def;
		    wja->dmg -= wzardzewialy_m->dmg;
		}
		if(wdwureczniak->id == wja->bron)
		{
		    wja->def -= wdwureczniak->def;
		    wja->dmg -= wdwureczniak->dmg;
		}
		if(wtopor_w->id == wja->bron) 
		{
		    wja->def -= wtopor_w->def;
		    wja->dmg -= wtopor_w->dmg;
		}
		if(wgniew_i->id == wja->bron) 
		{
		    wja->def -= wgniew_i->def;
		    wja->dmg -= wgniew_i->dmg;
		}
		if(wuriziel->id == wja->bron) 
		{
		    wja->def -= wuriziel->def;
		    wja->dmg -= wuriziel->dmg;
		}
			if(wja->bron != eq->id)
			{
				wja->dmg += eq->dmg;
				wja->def += eq->def;
				wja->bron = eq->id;
				cout<<"Za³o¿y³eœ "<<eq->nazwa<<" (+"<<eq->dmg<<" dmg)"<<endl;
				cin.ignore();
			}
			else 
			{
				wja->dmg -= eq->dmg;
				wja->def -= eq->def;
				wja->bron = 0;
				cout<<"Od³o¿y³eœ "<<eq->nazwa<<" (+"<<eq->dmg<<" dmg)"<<endl;
				cin.ignore();
			}
	}
	else cout<<"Nie posiadasz "<<eq->nazwa<<""<<endl;
}
void zaloz_pancerz(item *eq)
{
	if(eq->posiadasz)
	{
		if(wspodnie_k->id == wja->pancerz) 
		{
		    wja->def -= wspodnie_k->def;
		    wja->dmg -= wspodnie_k->dmg;
		}
		if(wstroj_c->id == wja->pancerz) 
		{
		    wja->def -= wstroj_c->def;
		    wja->dmg -= wstroj_c->dmg;
		}
		if(wzbroja_s->id == wja->pancerz) 
		{
		    wja->def -= wzbroja_s->def;
		    wja->dmg -= wzbroja_s->dmg;
		}
		if(wciezka_z->id == wja->pancerz) 
		{
		    wja->def -= wciezka_z->def;
		    wja->dmg -= wciezka_z->dmg;
		}
		if(wzbroja_p->id == wja->pancerz) 
		{
		    wja->def -= wzbroja_p->def;
		    wja->dmg -= wzbroja_p->dmg;
		}
		if(wstarozytna_z->id == wja->pancerz) 
		{
		    wja->def -= wstarozytna_z->def;
		    wja->dmg -= wstarozytna_z->dmg;
		}
			if(wja->bron != eq->id)
			{
				wja->dmg += eq->dmg;
				wja->def += eq->def;
				wja->pancerz = eq->id;
				cout<<"Za³o¿y³eœ "<<eq->nazwa<<" (+"<<eq->def<<" def)"<<endl;
				cin.ignore();
			}
			else 
			{
				wja->dmg -= eq->dmg;
				wja->def -= eq->def;
				wja->pancerz = 0;
				cout<<"Od³o¿y³eœ "<<eq->nazwa<<" (+"<<eq->def<<" def)"<<endl;
				cin.ignore();
			}
	}
	else cout<<"Nie posiadasz "<<eq->nazwa<<""<<endl;
}
