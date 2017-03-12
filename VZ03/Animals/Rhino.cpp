#include "Rhino.h"

Rhino::Rhino(int _x, int _y): LandAnimal(_x, _y){
	bobot = 20;
}

Rhino::~Rhino(){

}
	
void Rhino::addBobot(){
	bobot++;
}

int Rhino::getBobot(){
	return bobot;
}

char Rhino::getSimbol(){
	return simbol;
}
	
string Rhino::interact(){
	return "culacula";
}

string Rhino::getTipeAnimal(){
	return tipeAnimal;
}
