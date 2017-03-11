#ifndef BUTTERFLY_H
#define BUTTERFLY_H

#include "FlyingAnimal.h"

class Butterfly: public FlyingAnimal{
public:
	Butterfly();
	~Butterfly();
	
	string interact();
};
#endif
