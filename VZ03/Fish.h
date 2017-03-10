#ifndef FISH_H
#define FISH_H

#include "WaterAnimal.h"

class Fish: public WaterAnimal{
public:
	Fish();
	~Fish();
	
	string interact();
};
#endif
