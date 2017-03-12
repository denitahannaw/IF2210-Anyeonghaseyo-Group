#include "Hedgehog.h"

Hedgehog::Hedgehog(int _x, int _y): LandAnimal(_x, _y){
	bobot = 20;
}

Hedgehog::~Hedgehog(){

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
