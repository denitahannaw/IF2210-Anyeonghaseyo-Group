#ifndef FLYING_ANIMAL_H
#define FLYING_ANIMAL_H

#include "Animal.h"

class FlyingAnimal: virtual public Animal{
public:
	FlyingAnimal(int,int);
	FlyingAnimal(const FlyingAnimal&);
	virtual ~FlyingAnimal();
	
	//virtual void addBobot()=0;
	//virtual int getBobot()=0;
	//virtual char getSimbol()=0;
	
	virtual string interact()=0;
	string getTipeHabitat();
	virtual string getTipeAnimal()=0;
	
protected:
	const string tipeHabitat = "air";
};
#endif
