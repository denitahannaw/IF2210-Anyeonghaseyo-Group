#ifndef CAT_H
#define CAT_H

#include "LandAnimal.cpp"

class Cat: public LandAnimal{
public:
	Cat(int,int);
	~Cat();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "cat";
	const char simbol = 'c';
	int bobot;
};
#endif
