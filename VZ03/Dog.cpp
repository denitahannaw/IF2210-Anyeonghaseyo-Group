#include "Dog.h"

Dog::Dog(int _x, int _y): LandAnimal(_x, _y), Animal(_x,_y){
	bobot = 10;
	musuh = new string[2];
	musuh[0] = "cat";
	musuh[1] = "lion";
}

Dog::~Dog(){

}

string Dog::getMusuh(int i){
	return musuh[i];
}
	
void Dog::addBobot(){
	bobot++;
}

int Dog::getBobot(){
	return bobot;
}

char Dog::getSimbol(){
	return simbol;
}
	
string Dog::interact(){
	return "barkbark";
}

string Dog::getTipeAnimal(){
	return tipeAnimal;
}
