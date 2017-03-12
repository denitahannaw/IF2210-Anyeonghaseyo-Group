#include "Beetle.h"

Beetle::Beetle(int _x, int _y): FlyingAnimal(_x, _y){
	bobot = 2;
	musuh = new string[2];
	musuh[0] = "bee";
	musuh[1] = "owl";
}

Beetle::~Beetle(){

}
	
string Beetle::getMusuh(int i){
	return musuh[i];
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
