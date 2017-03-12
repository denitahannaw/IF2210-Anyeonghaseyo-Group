#include "Cow.h"

Cow::Cow(int _x, int _y): LandAnimal(_x, _y){
	bobot = 25;
}

Cow::~Cow(){

}
	
void Cow::addBobot(){
	bobot++;
}

int Cow::getBobot(){
	return bobot;
}

char Cow::getSimbol(){
	return simbol;
}
	
string Cow::interact(){
	return "mooow";
}

string Cow::getTipeAnimal(){
	return tipeAnimal;
}
