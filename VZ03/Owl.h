#ifndef OWL_H
#define OWL_H

#include "FlyingAnimal.h"

class Owl: public FlyingAnimal{
public:
	Owl();
	~Owl();
	
	string interact();
};
#endif
