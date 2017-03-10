#ifndef HEDGEHOG_H
#define HEDGEHOG_H

#include "LandAnimal.h"

class Hedgehog: public LandAnimal{
public:
	Hedgehog();
	~Hedgehog();
	
	string interact();
};
#endif
