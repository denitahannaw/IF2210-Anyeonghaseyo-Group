#ifndef EAGLE_H
#define EAGLE_H

#include "FlyingAnimal.h"

class Eagle: public FlyingAnimal{
public:
	Eagle();
	~Eagle();
	
	string interact();
};
#endif
