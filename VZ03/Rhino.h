#ifndef RHINO_H
#define RHINO_H

#include "LandAnimal.h"

class Rhino: public LandAnimal{
public:
	Rhino();
	~Rhino();
	
	string interact();
};
#endif
