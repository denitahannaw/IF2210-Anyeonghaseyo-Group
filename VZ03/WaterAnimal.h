#ifndef WATER_ANIMAL_H
#define WATER_ANIMAL_H

#include "Animal.h"

class WaterAnimal: public Animal{
public:
	WaterAnimal(int,int);
	WaterAnimal(const WaterAnimal&);
	virtual ~WaterAnimal();
	
	//virtual void addBobot()=0;
	//virtual int getBobot()=0;
	//virtual char getSimbol()=0;
	
	virtual string interact()=0;
	string getTipeHabitat();
	virtual string getTipeAnimal()=0;
	
protected:
	const string tipeHabitat = "water";
};
#endif
