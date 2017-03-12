#include "Lion.h"

Lion::Lion(int _x, int _y): LandAnimal(_x, _y){
	bobot = 20;
	musuh = new string[2];
	musuh[0] = "cat";
	musuh[1] = "dog";
}

Lion::~Lion(){

}
	
string Lion::getMusuh(int i){
	return musuh[i];
}

void Lion::addBobot(){
	bobot++;
}

int Lion::getBobot(){
	return bobot;
}

char Lion::getSimbol(){
	return simbol;
}
	
string Lion::interact(){
	return "auuum";
}

string Lion::getTipeAnimal(){
	return tipeAnimal;
}
