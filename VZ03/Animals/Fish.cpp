#include "Fish.h"

Fish::Fish(int _x, int _y): WaterAnimal(_x, _y){
	bobot = 5;
	musuh[0] = "duck";
	musuh[1] = "crocodile";
}

Fish::~Fish(){

}
	
string Fish::getMusuh(int i){
	return musuh[i];
}

void Fish::addBobot(){
	bobot++;
}

int Fish::getBobot(){
	return bobot;
}

char Fish::getSimbol(){
	return simbol;
}
	
string Fish::interact(){
	return "wetwet";
}

string Fish::getTipeAnimal(){
	return tipeAnimal;
}
