#include "Cat.h"

Cat::Cat(int _x, int _y): LandAnimal(_x, _y){
	bobot = 10;
}

Cat::~Cat(){

}
	
void Cat::addBobot(){
	bobot++;
}

int Cat::getBobot(){
	return bobot;
}

char Cat::getSimbol(){
	return simbol;
}
	
string Cat::interact(){
	return "meowmeow";
}

string Cat::getTipeAnimal(){
	return tipeAnimal;
}
