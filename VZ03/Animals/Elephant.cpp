#include "Elephant.h"

Elephant::Elephant(int _x, int _y): LandAnimal(_x, _y){
	bobot = 30;
}

Elephant::~Elephant(){

}
	
void Elephant::addBobot(){
	bobot++;
}

int Elephant::getBobot(){
	return bobot;
}

char Elephant::getSimbol(){
	return simbol;
}
	
string Elephant::interact(){
	return "belalaihuee";
}

string Elephant::getTipeAnimal(){
	return tipeAnimal;
}
