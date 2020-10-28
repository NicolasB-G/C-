#include "mage.h"
#include "Aventurier.h"
#include "race.h"
#include <string>


using namespace std;


mage::mage() : Aventurier()
{

}
mage::mage(Race* race) : Aventurier(race)
{
    mage::nom = "mage";
}

mage::mage(Race* race, int rang) : Aventurier(race,rang)
{
    mage::nom = "mage";
    mage::attaque = 1;
    mage::chance = 1;
    mage::defense = 1;
    mage::exp = 0;
    mage::niveau;
    mage::vie = 100;
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
string mage::to_string()
{
    string info;

    info = "mage";

    return info;
}
