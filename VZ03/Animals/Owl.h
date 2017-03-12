#ifndef OWL_H
#define OWL_H

#include "FlyingAnimal.cpp"

class Owl: public FlyingAnimal{
public:
	Owl(int,int);
	~Owl();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "owl";
	const char simbol = 'o';
	int bobot;
};
#endif
