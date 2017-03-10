#ifndef CROCODILE_H
#define CROCODILE_H

#include "WaterAnimal.h"

class Crocodile: public WaterAnimal{
public:
	Crocodile();
	~Crocodile();
	
	string interact();
};
#endif
