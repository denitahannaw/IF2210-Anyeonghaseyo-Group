#ifndef CHICKEN_H
#define CHICKEN_H

#include "LandAnimal.h"

class Chicken: public LandAnimal{
public:
	Chicken();
	~Chicken();
	
	string interact();
};
#endif
