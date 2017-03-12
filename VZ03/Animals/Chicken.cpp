#include "Chicken.h"

Chicken::Chicken(int _x, int _y): LandAnimal(_x, _y){
	bobot = 7;
}

Chicken::~Chicken(){

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
