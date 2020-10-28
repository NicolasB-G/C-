#include "Guerrier.h"
#include "Aventurier.h"
#include "race.h"
#include <string>


using namespace std;


Guerrier::Guerrier()
{
}

Guerrier::Guerrier(Race* race) : Aventurier(race)
{
    Guerrier::nom = "Guerrier";
}
Guerrier::Guerrier(Race* race, int rang) : Aventurier(race, rang)
{
    this->rang = rang;
    this->nom = "Guerrier";
    this->attaque = 1;
    this->chance = 1;
    this->defense = 1;
    this->exp = 0;
    this->niveau =1;
    this->vie = 100;

    if (rang == 1)
    {
        this->attaque = this->attaque *2;
        this->defense  = this->defense * 2;
        this->chance = this->chance * 2 * 2;
        this->vie = this->vie * 2;
        this->niveau = 2;
        
    }
    else if (rang ==2)
    {
        this->attaque = this->attaque * 3;
        this->defense = this->defense * 3;
        this->chance = this->chance * 3;
        this->vie = this->vie * 3;
        this->niveau= 5;
        
    }
    else if (rang ==3)
    {
        this->attaque = this->attaque * 4;
        this->defense = this->defense * 4;
        this->chance = this->chance * 4;
        this->vie = this->vie * 4;
        this->niveau = 10;
    }
    

}
string Guerrier::to_string()
{
    string info;

    info = "guerrier";

    return info;
}
