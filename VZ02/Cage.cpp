#include "Cage.h"

//Cage::Cage(){}
/**
* @brief Constructor
* Membangun cage
* @param simbol Simbol dari cage
* @param tipehabitat Tipe habitat cage
* @param cageArea Luas cage / jumlah cell
*/
Cage::Cage(char simbol, string tipeHabitat, int cageArea){
	this->simbol = simbol;
	this->tipeHabitat = tipeHabitat;
	this->cageArea = cageArea;

	listOfCagePosition = new Cell*[cageArea];
	animals = new Animal*[getMaxAnimal()];
}

/**
* @brief Destructor
*/
Cage::~Cage(){
	for(int i=0; i<cageArea; i++){
		delete [] *listOfCagePosition;
	}

	delete [] listOfCagePosition;
}

/**
* @brief Setter
* Menambahkan posisi cell tempat didirikannya cage
* @param position Posisi cage
* @param i Posisi cage ke i
*/
void Cage::addCagePosition(Cell* position, int i){
	listOfCagePosition[i] = position;
}

/**
* @brief Getter
* Mendapatkan cageArea
*/
int Cage::getCageArea(){
	return cageArea;
}

/**
* @brief Getter
* Mendapatkan tipeHabitat
* @return tipeHabitat
*/
string Cage::getTipeHabitat(){
	return tipeHabitat;
}

/**
* @brief Getter
* Mendapatkan listOfCagePosition[i]
* @param i index listOfCagePosition
* @return listOfCagePosition[i]
*/
Cell* Cage::getCagePosition(int i){
	return listOfCagePosition[i];
}

/**
* @brief Setter
* Set cageArea=area
* @param area cageArea baru
*/
void Cage::setCageArea(int area){
	cageArea = area;
}

/**
* @brief getter SIMBOL
* Mengembalikan nilai SIMBOL
* @return SIMBOL
*/
char Cage::render(){
	return simbol;
}

/**
* @brief max animal
* Maksimal animal dalam cage = 30% dari cageArea
* @return 30%*cageArea;
*/
int Cage::maxAnimal(){
	return 30*cageArea/100;
}

/**
* @brief Setter
* Menambahkan 1 animal secara random berdasarkan tipeHabitat
*/
void Cage::createAnimal(){
	if (getTipeHabitat()=="landhabitat"){
		int nr;
		for(int i=0; i<maxAnimal(); i++){
			nr = rand() % 12 + 1;
			switch(nr){
				case 1: animals[i] = new Cat();
				case 2: animals[i] = new Dog();
				case 3: animals[i] = new Lion();
				case 4: animals[i] = new Snake();
				case 5: animals[i] = new Goat();
				case 6: animals[i] = new Chicken();
				case 7: animals[i] = new Elephant();
				case 8: animals[i] = new Cow();
				case 9: animals[i] = new Hedgehog();
				case 10: animals[i] = new Rhino();
				case 11: anilals[i] = new Frog();
				case 12: animals[i] = new Beetle();
			}
			
		}
	}else if (getTipeHabitat()=="waterhabitat"){
		int nr;
		for(int i=0; i<maxAnimal(); i++){
			nr = rand() % 5 + 1;
			switch(nr){
				case 1: animals[i] = new Fish();
				case 2: animals[i] = new Crocodile();
				case 3: animals[i] = new Frog();
				case 4: animals[i] = new Duck();
				case 5: animals[i] = new FlyingFish();
			}
		}
	}else if (getTipeHabitat()=="airhabitat"){
		int nr;
		for(int i=0; i<maxAnimal(); i++){
			nr = rand() % 7 + 1;
			switch(nr){
				case 1: animals[i] = new Beetle();
				case 2: animals[i] = new Bee();
				case 3: animals[i] = new Owl();
				case 4: animals[i] = new Eagle();
				case 5: animals[i] = new Butterfly();
				case 6: animals[i] = new Bird();
				case 7: animals[i] = new FlyingFish();
			}
		}
	}
}
