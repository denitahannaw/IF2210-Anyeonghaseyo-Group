#include "Crocodile.h"

Crocodile::Crocodile(int _x, int _y): WaterAnimal(_x, _y){
	bobot = 25;
}

Crocodile::~Crocodile(){

}
	
void Crocodile::addBobot(){
	bobot++;
}

int Crocodile::getBobot(){
	return bobot;
}

char Crocodile::getSimbol(){
	return simbol;
}
	
string Crocodile::interact(){
	return "splashsplash";
}

string Crocodile::getTipeAnimal(){
	return tipeAnimal;
}
