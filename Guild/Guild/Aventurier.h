#pragma once
#include <string>
#include "Race.h"
using namespace std;

class Aventurier
{
private:
	Race* race;
	int valeurMarchande;
	
	
protected:
	int attaque;
	int defense;
	int vie;
	int chance;
	int niveau;
	int exp;
	int rang;
	string nom;

public:
	Aventurier();
	Aventurier(Race* race);
	Aventurier(Race* race,int rang);
	Aventurier(string nom,int niveau, int exp);
	~Aventurier();

	 int getAtt();
	 int getDef();
	 int getVie();
	 int getRang();
	 string to_string();

};
