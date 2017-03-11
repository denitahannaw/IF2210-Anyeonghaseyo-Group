#ifndef DUCK_H
#define DUCK_H

#include "WaterAnimal.h"

class Duck: public WaterAnimal{
public:
	Duck();
	~Duck();
	
	string interact();
};
#endif
