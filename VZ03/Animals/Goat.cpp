#include "Goat.h"

Goat::Goat(int _x, int _y): LandAnimal(_x, _y){
	bobot = 18;
}

Goat::~Goat(){

}
	
void Goat::addBobot(){
	bobot++;
}

int Goat::getBobot(){
	return bobot;
}

char Goat::getSimbol(){
	return simbol;
}
	
string Goat::interact(){
	return "embeee";
}

string Goat::getTipeAnimal(){
	return tipeAnimal;
}
