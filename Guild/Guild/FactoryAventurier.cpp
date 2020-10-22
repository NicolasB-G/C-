#include "Aventurier.h" 
#include "FactoryAventurier.h"
#include "Guerrier.h"
#include "mage.h"
#include "Paladin.h"
#include "humain.h"
#include "elf.h"
#include <cstdlib>
#include <string>
#include<ctime>

#include <list>
int FactoryAventurier::getRangAventurier()
{
	int valeurRA = rand() % 3 + 1;
	string info = "Rien";

	switch (valeurRA)
	{
		case 1: info="Junior"; break;
		case 2: info="senior"; break;
		case 3: info="veteran"; break;
		default:
		break;
	}

	return valeurRA;

}

FactoryAventurier::~FactoryAventurier()
{
	
}
FactoryAventurier::FactoryAventurier()
{
}
Aventurier* FactoryAventurier::getRandomAventurier()
{
	
	 int valeurC = rand() % 3 + 1;
	 int valeurR = rand() % 2 + 1;
	 Aventurier* aventurier=0;

	 if (valeurC==1)
	 {
		 if (valeurR == 1)
		 {
			  aventurier = new Guerrier(new humain(),getRangAventurier());
			 
		 }
		 if (valeurR == 2)
		 {
			  aventurier = new Guerrier(new elf(), getRangAventurier());
			 
		 }
	 }
		 
	 else if (valeurC==2)
	{
		 if (valeurR == 1)
		 {
			  aventurier = new mage(new humain(),getRangAventurier());
			 
		 }
			
		 if (valeurR == 2)
		 {
			  aventurier = new mage(new elf(),getRangAventurier());
			
		 }
	}
		 
	 else if (valeurC == 3)
	{
		 if (valeurR == 1)
		 {
			  aventurier = new Paladin(new humain(),getRangAventurier());
			 
		 }
		 
		 if (valeurR == 2)
		 {
			  aventurier = new Paladin(new elf(),getRangAventurier());
			 
		 }
	}
	 return aventurier;
} 