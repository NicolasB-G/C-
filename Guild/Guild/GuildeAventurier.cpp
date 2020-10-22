#include "GuildeAventurier.h"
#include "FactoryAventurier.h"
#include "MenuManager.h"
#include <iostream>
#include <new.h>

void GuildeAventurier::recruterHero(Aventurier* aventurier)
{

	listeAVenturierChoisi.push_back(aventurier);
	
}

void GuildeAventurier::update()
{
	do {
		updateMenu();
	} while (!finPartie);
}

void GuildeAventurier::updateMenu()
{
	selectionerHero();

}

void GuildeAventurier::selectionerHero()
{
	for (auto it = listeAVenturierRecruitable.begin(); it != listeAVenturierRecruitable.end(); it++)
	{
		cout << (*it)->to_string() << endl;
	}
	
}

GuildeAventurier::GuildeAventurier()
{
	FactoryAventurier* factory = new FactoryAventurier();
	listeAVenturierRecruitable.push_back(factory->getRandomAventurier());
	listeAVenturierRecruitable.push_back(factory->getRandomAventurier());
}



void GuildeAventurier::initialiserJeu()
{
	Menu = new MenuManager();
}

void GuildeAventurier::lancerJeu()
{
	update();
}

GuildeAventurier::~GuildeAventurier()
{

}
