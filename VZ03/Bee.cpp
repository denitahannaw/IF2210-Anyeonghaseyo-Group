#include "Bee.h"

Bee::Bee(int _x, int _y): FlyingAnimal(_x, _y){
	bobot = 1;
	musuh = new string[2];
	musuh[0] = "owl";
	musuh[1] = "beetle";
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

string Bee::getMusuh(int i){
	return musuh[i];
}
