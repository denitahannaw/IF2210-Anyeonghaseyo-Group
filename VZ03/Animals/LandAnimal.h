#ifndef LAND_ANIMAL_H
#define LAND_ANIMAL_H

#include "Animal.h"

class LandAnimal: public Animal{
public:
	LandAnimal();
	LandAnimal(const LandAnimal&);
	virtual ~LandAnimal();
	
	virtual string interact()=0;
	string tipeAnimal();
	
protected:
	const string tipe = "land";
};
#endif
