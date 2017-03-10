#ifndef SNAKE_H
#define SNAKE_H

#include "LandAnimal.h"

class Snake: public LandAnimal{
public:
	Snake();
	~Snake();
	
	string interact();
};
#endif
