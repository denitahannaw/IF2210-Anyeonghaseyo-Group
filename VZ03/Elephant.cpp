#include "Elephant.h"

Elephant::Elephant(int _x, int _y): LandAnimal(_x, _y), Animal(_x,_y){
	bobot = 30;
	musuh = new string[2];
	musuh[0] = "cow";
	musuh[1] = "hedgehog";
}

Elephant::~Elephant(){

}

string Elephant::getMusuh(int i){
	return musuh[i];
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
