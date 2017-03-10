#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal{
public:
	Animal();
	Animal(const Animal&);
	virtual ~Animal();
	
	virtual string interact()=0;
	virtual string tipeAnimal()=0;	
};
#endif
