#pragma once
#include "Guerrier.h"
#include "Aventurier.h"
#include "race.h"
#include <string>

class Guerrier :public Aventurier
{
public:

	Guerrier();
	Guerrier(Race* race);
	Guerrier(Race* race, int rang);
	Guerrier(Race* race, string rang);
	string to_string();
private:


};