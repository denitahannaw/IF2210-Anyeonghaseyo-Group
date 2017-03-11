#ifndef DOG_H
#define DOG_H

#include "LandAnimal.h"

class Dog: public LandAnimal{
public:
	Dog();
	~Dog();
	
	string interact();
};
#endif
