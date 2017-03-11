#ifndef BEETLE_H
#define BEETLE_H

#include "FlyingAnimal.h"

class Beetle: public FlyingAnimal{
public:
	Beetle();
	~Beetle();
	
	string interact();
};
#endif
