#ifndef FLYING_ANIMAL_H
#define FLYING_ANIMAL_H

#include "Animal.h"

class FlyingAnimal: public Animal{
public:
	FlyingAnimal();
	FlyingAnimal(const FlyingAnimal&);
	virtual ~FlyingAnimal();
	
	virtual string interact()=0;
	string tipeAnimal();
	
protected:
	const string tipe = "flying";
};
#endif
