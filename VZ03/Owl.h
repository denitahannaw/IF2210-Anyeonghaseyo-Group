#ifndef OWL_H
#define OWL_H

#include "FlyingAnimal.h"
#include "Karnivora.h"

class Owl: public FlyingAnimal, public Karnivora{
public:
	Owl(int,int);
	~Owl();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "owl";
	const char simbol = 'o';
	int bobot;
	string* musuh;
};
#endif
