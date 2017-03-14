#include "Goat.h"

Goat::Goat(int _x, int _y): LandAnimal(_x, _y), Animal(_x,_y){
	bobot = 18;
	musuh = new string[2];
	musuh[0] = "snake";
	musuh[1] = "chicken";
}

Goat::~Goat(){

}
	
string Goat::getMusuh(int i){
	return musuh[i];
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
