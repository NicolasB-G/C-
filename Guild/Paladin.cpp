#include "Paladin.h"
Paladin::Paladin() : Aventurier()
{

}

Paladin::Paladin(Race* race) : Aventurier(race)
{
    Paladin::nom = "Paladin";
}
Paladin::Paladin(Race* race, int rang) : Aventurier(race, rang)
{
    Paladin::nom = "Paladin";
    Paladin::attaque = 1;
    Paladin::chance = 1;
    Paladin::defense = 1;
    Paladin::exp = 0;
    Paladin::niveau;
    Paladin::vie = 100;
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
string Paladin::to_string()
{
    string info;

    info = "Paladin";

    return info;
}