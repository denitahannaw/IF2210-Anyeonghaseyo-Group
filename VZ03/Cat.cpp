#include "Cat.h"

Cat::Cat(int _x, int _y): LandAnimal(_x, _y), Animal(_x,_y){
	bobot = 10;
	musuh = new string[2];
	musuh[0] = "dog";
	musuh[1] = "lion";
}

Cat::~Cat(){

}
	
string Cat::getMusuh(int i){
	return musuh[i];
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
