#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal{
public:
	Animal(int,int);
	Animal(const Animal&);
	virtual ~Animal();
	
	void setX(int);
	void setY(int);
	int getX();
	int getY();
	
	virtual void addBobot()=0;
	virtual int getBobot()=0;
	virtual char getSimbol()=0;
	virtual string interact()=0;
	virtual string getTipeAnimal()=0;
	virtual string getTipeHabitat()=0;	
	
protected:
	int x;
	int y;
};
#endif
