#ifndef CAT_H
#define CAT_H

#include "LandAnimal.h"
#include "Karnivora.h"

class Cat: public LandAnimal, public Karnivora{
public:
	Cat(int,int);
	~Cat();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "cat";
	const char simbol = 'c';
	int bobot;
	string* musuh;
};
#endif
