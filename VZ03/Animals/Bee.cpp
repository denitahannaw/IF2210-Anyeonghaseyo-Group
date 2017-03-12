#include "Bee.h"

Bee::Bee(int _x, int _y): FlyingAnimal(_x, _y){
	bobot = 1;
}

Bee::~Bee(){

}
	
void Bee::addBobot(){
	bobot++;
}

int Bee::getBobot(){
	return bobot;
}

char Bee::getSimbol(){
	return simbol;
}
	
string Bee::interact(){
	return "ngggnggg";
}

string Bee::getTipeAnimal(){
	return tipeAnimal;
}
