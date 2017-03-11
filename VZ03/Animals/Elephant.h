#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "LandAnimal.h"

class Elephant: public LandAnimal{
public:
	Elephant();
	~Elephant();
	
	string interact();
};
#endif
