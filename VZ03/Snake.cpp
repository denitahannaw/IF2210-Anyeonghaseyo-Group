#include "Snake.h"

Snake::Snake(int _x, int _y): LandAnimal(_x, _y), Animal(_x,_y){
	bobot = 15;
	musuh = new string[2];
	musuh[0] = "goat";
	musuh[1] = "chicken";
}

Snake::~Snake(){

}

string Snake::getMusuh(int i){
	return musuh[i];
}
	
void Snake::addBobot(){
	bobot++;
}

int Snake::getBobot(){
	return bobot;
}

char Snake::getSimbol(){
	return simbol;
}
	
string Snake::interact(){
	return "ssstt";
}

string Snake::getTipeAnimal(){
	return tipeAnimal;
}
