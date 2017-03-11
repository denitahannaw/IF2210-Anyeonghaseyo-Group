#ifndef BEE_H
#define BEE_H

#include "FlyingAnimal.h"

class Bee: public FlyingAnimal{
public:
	Bee();
	~Bee();
	
	string interact();
};
#endif
