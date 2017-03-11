#ifndef COW_H
#define COW_H

#include "LandAnimal.h"

class Cow: public LandAnimal{
public:
	Cow();
	~Cow();
	
	string interact();
};
#endif
