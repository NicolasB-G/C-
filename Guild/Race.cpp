#include "Race.h"
#include "Aventurier.h"
#include <string>
#include "Guerrier.h" 
using namespace std;

Race::Race(int attaque, int  defense, int vie, int chance)
{

};

Race::Race()
{

};
int  Race::getAtt()
{
	return attaque;

};

int  Race::getDef()
{
	return defense;

};

int  Race::getVie()
{
	return vie;
};

string  Race::getNom()
{
	return nom;
};

