#include "Aventurier.h" 
#include <string>
class FactoryAventurier
{
private :
	int getRangAventurier();
public:
	FactoryAventurier();
	~FactoryAventurier();
	Aventurier* getRandomAventurier();
	
};