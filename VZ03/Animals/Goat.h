#ifndef GOAT_H
#define GOAT_H

#include "LandAnimal.h"

class Goat: public LandAnimal{
public:
	Goat();
	~Goat();
	
	string interact();
};
#endif
