#include "Beetle.h"

Beetle::Beetle(int _x, int _y): FlyingAnimal(_x, _y){
	bobot = 2;
}

Beetle::~Beetle(){

}
	
void Beetle::addBobot(){
	bobot++;
}

int Beetle::getBobot(){
	return bobot;
}

char Beetle::getSimbol(){
	return simbol;
}
	
string Beetle::interact(){
	return "kepakkepak";
}

string Beetle::getTipeAnimal(){
	return tipeAnimal;
}
