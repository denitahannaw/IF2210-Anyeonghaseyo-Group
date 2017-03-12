#include "Crocodile.h"

Crocodile::Crocodile(int _x, int _y): WaterAnimal(_x, _y){
	bobot = 25;
	musuh[0] = "duck";
	musuh[1] = "fish";
}

Crocodile::~Crocodile(){

}

string Crocodile::getMusuh(int i){
	return musuh[i];
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
