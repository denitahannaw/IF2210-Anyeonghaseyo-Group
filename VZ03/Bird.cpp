#include "Bird.h"

Bird::Bird(int _x, int _y): LandAnimal(_x, _y), FlyingAnimal(_x, _y), Animal(_x,_y){
	bobot = 7;
	musuh = new string[2];
	musuh[0] = "butterfly";
	musuh[1] = "eagle";
}

Bird::~Bird(){

}

string Bird::getMusuh(int i){
	return musuh[i];
}
	
void Bird::addBobot(){
	bobot++;
}

int Bird::getBobot(){
	return bobot;
}

char Bird::getSimbol(){
	return simbol;
}
	
string Bird::interact(){
	return "cuitcuit";
}

string Bird::getTipeAnimal(){
	return tipeAnimal;
}

// int Bird::getX(){
// 	return LandAnimal::x;
// }

// int Bird::getY(){
// 	return LandAnimal::y;
// }

// void Bird::setX(int _x){
// 	LandAnimal::x = _x;
// 	FlyingAnimal::x = _x;
// }

// void Bird::setY(int _y){
// 	LandAnimal::y = _y;
// 	FlyingAnimal::y = _y;
// }

string Bird::getTipeHabitat(){}