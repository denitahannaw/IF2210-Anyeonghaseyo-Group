#ifndef LION_H
#define LION_H

#include "LandAnimal.h"

class Lion: public LandAnimal{
public:
	Lion();
	~Lion();
	
	string interact();
};
#endif
