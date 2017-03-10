#ifndef WATER_ANIMAL_H
#define WATER_ANIMAL_H

#include "Animal.h"

class WaterAnimal: public Animal{
public:
	WaterAnimal();
	WaterAnimal(const WaterAnimal&);
	virtual ~WaterAnimal();
	
	virtual string interact()=0;
	string tipeAnimal();
	
protected:
	const string tipe = "water";
};
#endif
