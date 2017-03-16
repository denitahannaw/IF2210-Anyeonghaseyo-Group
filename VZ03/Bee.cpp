#include "Bee.h"

// ctor animal dengan parameter
Bee::Bee(int _x, int _y): FlyingAnimal(_x, _y), Animal(_x,_y){
	bobot = 1;
	musuh = new string[2];
	musuh[0] = "owl";
	musuh[1] = "beetle";
}

// dtor animal
Bee::~Bee(){

}
	
// set bobot animal
void Bee::addBobot(){
	bobot++;
}

// get bobot animal
int Bee::getBobot(){
	return bobot;
}

// get simbol animal
char Bee::getSimbol(){
	return simbol;
}
	
// get tipe interact animal
string Bee::interact(){
	return "ngggnggg";
}

// get tipe animal
string Bee::getTipeAnimal(){
	return tipeAnimal;
}

// get musuh dengan parameter
string Bee::getMusuh(int i){
	return musuh[i];
}
