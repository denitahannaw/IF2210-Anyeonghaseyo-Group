#include "Butterfly.h"

Butterfly::Butterfly(int _x, int _y): FlyingAnimal(_x, _y){
	bobot = 3;
}

Butterfly::~Butterfly(){

}
	
void Butterfly::addBobot(){
	bobot++;
}

int Butterfly::getBobot(){
	return bobot;
}

char Butterfly::getSimbol(){
	return simbol;
}
	
string Butterfly::interact(){
	return "flyfly";
}

string Butterfly::getTipeAnimal(){
	return tipeAnimal;
}
