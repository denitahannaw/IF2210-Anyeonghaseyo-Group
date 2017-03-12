#include "Snake.h"

Snake::Snake(int _x, int _y): LandAnimal(_x, _y){
	bobot = 15;
}

Snake::~Snake(){

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
