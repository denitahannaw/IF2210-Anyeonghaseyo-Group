#include "Duck.h"

Duck::Duck(int _x, int _y): WaterAnimal(_x, _y){
	bobot = 10;
	musuh = new string[2];
	musuh[0] = "fish";
	musuh[1] = "crocodile";
}

Duck::~Duck(){

}
	
string Duck::getMusuh(int i){
	return musuh[i];
}

void Duck::addBobot(){
	bobot++;
}

int Duck::getBobot(){
	return bobot;
}

char Duck::getSimbol(){
	return simbol;
}
	
string Duck::interact(){
	return "kwekwek";
}

string Duck::getTipeAnimal(){
	return tipeAnimal;
}
