#include "Hedgehog.h"

Hedgehog::Hedgehog(int _x, int _y): LandAnimal(_x, _y){
	bobot = 20;
	musuh = new string[2];
	musuh[0] = "elephant";
	musuh[1] = "cow";
}

Hedgehog::~Hedgehog(){

}
	
string Hedgehog::getMusuh(int i){
	return musuh[i];
}

void Hedgehog::addBobot(){
	bobot++;
}

int Hedgehog::getBobot(){
	return bobot;
}

char Hedgehog::getSimbol(){
	return simbol;
}
	
string Hedgehog::interact(){
	return "duriduri";
}

string Hedgehog::getTipeAnimal(){
	return tipeAnimal;
}
