#include "Duck.h"

Duck::Duck(int _x, int _y): WaterAnimal(_x, _y){
	bobot = 10;
}

Duck::~Duck(){

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
