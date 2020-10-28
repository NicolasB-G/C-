#include "Aventurier.h"
#include <string>
using namespace std;


Aventurier::Aventurier()
{

};

Aventurier::Aventurier(Race* race)
{
    this->race = race;

}

Aventurier::Aventurier(Race* race, int rang)
{
    this->race = race;
    this->rang = rang;
    if (rang == 1)
    {
        this->attaque = this->attaque * 2;
        this->defense = this->defense * 2;
        this->chance = this->chance * 2 * 2;
        this->vie = this->vie * 2;
        this->niveau = 2;

    }
    else if (rang == 2)
    {
        this->attaque = this->attaque * 3;
        this->defense = this->defense * 3;
        this->chance = this->chance * 3;
        this->vie = this->vie * 3;
        this->niveau = 5;

    }
    else if (rang == 3)
    {
        this->attaque = this->attaque * 4;
        this->defense = this->defense * 4;
        this->chance = this->chance * 4;
        this->vie = this->vie * 4;
        this->niveau = 10;
    }

}
;

Aventurier::Aventurier(string nom, int niveau, int exp) //:nom("karlin"), niveau(1), exp(0)
{


};
Aventurier::~Aventurier()
{
    delete race;
};
 int  Aventurier ::getAtt()
{
	 return attaque;

};

 int  Aventurier::getDef()
 {
	 return defense;

 };

 int  Aventurier::getVie()
 {
	 return vie;

 };
 int  Aventurier::getRang()
 {
     return rang;

 };


 string  Aventurier::to_string()
{
    string info;
    info.append("Nom : " + nom + "\n");
    info.append("Race : " + race->getNom() + "\n");
    info.append("Attaque : " + std::to_string(this->getAtt()) + "\n");
    info.append("Defense : " + std::to_string(this->getDef()) + "\n");
    info.append("Vie : " + std::to_string(this->getVie()) + "\n");
    info.append("rang : " + std::to_string(this->getRang()) + + "\n");

    return info;
 }





 


