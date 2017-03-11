#ifndef CAT_H
#define CAT_H

#include "LandAnimal.h"

class Cat: public LandAnimal{
public:
	Cat();
	~Cat();
	
	string interact();
};
#endif
