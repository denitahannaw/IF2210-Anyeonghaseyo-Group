#ifndef FLYING_ANIMAL_H
#define FLYING_ANIMAL_H

#include "Animal.cpp"

class FlyingAnimal: public Animal{
public:
	FlyingAnimal();
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
