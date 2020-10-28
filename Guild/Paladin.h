#pragma once
#include "Aventurier.h"
#include "race.h"
#include <string>
class Paladin : public Aventurier
{
public:

	Paladin();
	Paladin(Race* race);
	Paladin(Race* race, int rang);
	string to_string();
private:


};

