#include "Butterfly.h"

Butterfly::Butterfly(int _x, int _y): FlyingAnimal(_x, _y){
	bobot = 3;
	musuh = new string[2];
	musuh[0] = "bird";
	musuh[1] = "eagle";
}

Butterfly::~Butterfly(){

}

string Butterfly::getMusuh(int i){
	return musuh[i];
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
