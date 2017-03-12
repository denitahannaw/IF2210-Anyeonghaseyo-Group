#include "Dog.h"

Dog::Dog(int _x, int _y): LandAnimal(_x, _y){
	bobot = 10;
}

Dog::~Dog(){

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
