#include "Chicken.h"

Chicken::Chicken(int _x, int _y): LandAnimal(_x, _y){
	bobot = 7;
	musuh[0] = "snake";
	musuh[1] = "goat";
}

Chicken::~Chicken(){

}
	
string Chicken::getMusuh(int i){
	return musuh[i];
}

void Chicken::addBobot(){
	bobot++;
}

int Chicken::getBobot(){
	return bobot;
}

char Chicken::getSimbol(){
	return simbol;
}
	
string Chicken::interact(){
	return "chipchip";
}

string Chicken::getTipeAnimal(){
	return tipeAnimal;
}
