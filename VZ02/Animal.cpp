#include "Animal.h"
#include <string>
using namespace std;

Animal::Animal(int _x, int _y, string tipe): tipeAnimal(tipe){
	
	x = _x;
	y = _y;
	
	if (tipeAnimal=="frog" || tipeAnimal=="flyingfish" || tipeAnimal=="bird"){
		nHabitat=2;
	} else nHabitat=1;
	tipeHabitat = new string[nHabitat];
	
	if (tipeAnimal=="frog"){
		simbol = 'f';
		tipeHabitat[0] = "land";
		tipeHabitat[1] = "water";
	} else if (tipeAnimal=="flyingfish"){
		simbol = 'y';
		tipeHabitat[0] = "air";
		tipeHabitat[1] = "water";
	} else if (tipeAnimal=="bird"){
		simbol = 'b';
		tipeHabitat[0] = "land";
		tipeHabitat[1] = "air";
	} else if (tipeAnimal=="cat"){
		simbol = 'c';
		tipeHabitat[0] = "land";
	} else if (tipeAnimal=="dog"){
		simbol = 'd';
		tipeHabitat[0] = "land";
	} else if (tipeAnimal=="lion"){
		simbol = 'l';
		tipeHabitat[0] = "land";
	} else if (tipeAnimal=="snake"){
		simbol = 's';
		tipeHabitat[0] = "land";
	} else if (tipeAnimal=="goat"){
		simbol = 'g';
		tipeHabitat[0] = "land";
	} else if (tipeAnimal=="chicken"){
		simbol = 'n';
		tipeHabitat[0] = "land";
	} else if (tipeAnimal=="elephant"){
		simbol = 'e';
		tipeHabitat[0] = "land";
	} else if (tipeAnimal=="cow"){
		simbol = 'w';
		tipeHabitat[0] = "land";
	} else if (tipeAnimal=="hedgehog"){
		simbol = 'h';
		tipeHabitat[0] = "land";
	} else if (tipeAnimal=="rhino"){
		simbol = 'r';
		tipeHabitat[0] = "land";
	} else if (tipeAnimal=="fish"){
		simbol = 'i';
		tipeHabitat[0] = "water";
	} else if (tipeAnimal=="crocodile"){
		simbol = 'j';
		tipeHabitat[0] = "water";
	} else if (tipeAnimal=="duck"){
		simbol = 'k';
		tipeHabitat[0] = "water";
	} else if (tipeAnimal=="beetle"){
		simbol = 'q';
		tipeHabitat[0] = "air";
	} else if (tipeAnimal=="bee"){
		simbol = 'z';
		tipeHabitat[0] = "air";
	} else if (tipeAnimal=="owl"){
		simbol = 'o';
		tipeHabitat[0] = "air";
	} else if (tipeAnimal=="eagle"){
		simbol = 'a';
		tipeHabitat[0] = "air";
	} else if (tipeAnimal=="butterfly"){
		simbol = 't';
		tipeHabitat[0] = "air";
	}
}

Animal::Animal(const Animal& anim){
	x = anim.x;
	y = anim.y;
	simbol = anim.simbol;
	nHabitat = anim.nHabitat;
	tipeHabitat = new string[nHabitat];
	for (int i=0;i<nHabitat;i++){
		tipeHabitat[i] = anim.tipeHabitat[i];
	}	
}

Animal::~Animal(){
	delete [] tipeHabitat;
}
	
void Animal::setX(int _x){
	x = _x;
}

void Animal::setY(int _y){
	y = _y;
}

int Animal::getX(){
	return x;
}

int Animal::getY(){
	return y;
}

string Animal::getTipeHabitat(int i){
	return tipeHabitat[i];
}

string Animal::getTipeAnimal(){
	return tipeAnimal;
}

char Animal::getSimbol(){
	return simbol;
}
		
string Animal::interact(){
	string ret="";
	if (tipeAnimal=="frog"){
		ret = "ribbit";
	} else if (tipeAnimal=="flyingfish"){
		ret = "flysplash";
	} else if (tipeAnimal=="bird"){
		ret = "cuitcuit";
	} else if (tipeAnimal=="cat"){
		ret = "meowmeow";
	} else if (tipeAnimal=="dog"){
		ret = "barkbark";
	} else if (tipeAnimal=="lion"){
		ret = "auuum";
	} else if (tipeAnimal=="snake"){
		ret = "ssstt";
	} else if (tipeAnimal=="goat"){
		ret = "embeee";
	} else if (tipeAnimal=="chicken"){
		ret = "chipchip";
	} else if (tipeAnimal=="elephant"){
		ret = "belalaihuee";
	} else if (tipeAnimal=="cow"){
		ret = "mooow";
	} else if (tipeAnimal=="hedgehog"){
		ret = "duriduri";
	} else if (tipeAnimal=="rhino"){
		ret = "culacula";
	} else if (tipeAnimal=="fish"){
		ret = "wetwet";
	} else if (tipeAnimal=="crocodile"){
		ret = "splashsplash";
	} else if (tipeAnimal=="duck"){
		ret = "kwekwek";
	} else if (tipeAnimal=="beetle"){
		ret = "kepakkepak";
	} else if (tipeAnimal=="bee"){
		ret = "ngggnggg";
	} else if (tipeAnimal=="owl"){
		ret = "uhukuhuk";
	} else if (tipeAnimal=="eagle"){
		ret = "gakgak";
	} else if (tipeAnimal=="butterfly"){
		ret = "flyfly";
	}
	return ret;
}
