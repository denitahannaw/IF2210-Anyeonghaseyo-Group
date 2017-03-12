#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal{
public:
	Animal(int,int,string);
	Animal(const Animal&);
	~Animal();
	
	void setX(int);
	void setY(int);
	void addBobot();
	int getX();
	int getY();
	int getBobot();
	string getTipeHabitat(int);
	string getTipeAnimal();
	char getSimbol();
	string getMusuh(int i);
		
	string interact();
private:
	int x;
	int y;
	int bobot;
	char simbol;
	string* tipeHabitat;
	const string tipeAnimal;
	int nHabitat;
	string tipeMakanan;
	string* musuh;
};
#endif
