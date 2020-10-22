#pragma once
#include "Aventurier.h"
#include "MenuManager.h"
#include <list>
#include <vector>

class GuildeAventurier
{
private :
	int orDisponible;
	bool finPartie;
	vector<Aventurier*> listeAVenturierChoisi;
	list<Aventurier*> listeAVenturierRecruitable;
	void recruterHero(Aventurier* aventurier);
	void update();
	void updateMenu();
	




public:
	GuildeAventurier();
	

	void selectionerHero();
	 static MenuManager* Menu;
	~GuildeAventurier();
	static void initialiserJeu();
	void lancerJeu();

	
};

