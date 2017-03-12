#include "Lion.h"

Lion::Lion(int _x, int _y): LandAnimal(_x, _y){
	bobot = 20;
}

Lion::~Lion(){

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
