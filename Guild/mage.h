#pragma once
#include "Aventurier.h"
#include "race.h"
#include <string>

class mage :public Aventurier
{
public:

	mage();
	mage(Race* race);
	mage(Race* race, int rang);
	string to_string();
private:


};