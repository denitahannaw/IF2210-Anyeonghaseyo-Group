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
	animals = new Animal*[maxAnimal()];
	nAnimal =0;
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

Animal* Cage::getAnimal(int i){
	return animals[i];
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
* @brief Menentukan apakah suatu cell cage telah ditempati animal atau belum
* @param c Cell
* @return bool
*/
bool Cage::isPositionEmpty(Cell* c){
	int i=0;
	bool empty = true;
	while (i<nAnimal && empty){
		if (animals[i]->getX() == c->getX() && animals[i]->getY() == c->getY()){
			empty = false;
		}
		i++;
	}

	return empty;
}

/**
* @brief Setter
* Menambahkan 1 animal secara random berdasarkan tipeHabitat ke animals
*/
#include <iostream>
using namespace std;
void Cage::createAnimal(){
	if (nAnimal < maxAnimal()){
		
		if (getTipeHabitat()=="land"){
			//random posisi awal, pastikan masih kosong 
			//random dari listOfPosisiCage
			int nr;
			bool found = false;
			Cell * pos;
			while (!found){
				nr = rand() % cageArea;
				pos = getCagePosition(nr);

				//cek apa ada hewan yang udah di posisi itu
				found = isPositionEmpty(pos);
			}
			
			int x = pos->getX();
			int y = pos->getY();
			
			int i = nAnimal;

			//ciptakan hewan
			nr = rand() % 12 + 1;
			switch(nr){
				case 1: animals[i] = new Cat(x,y);
				case 2: animals[i] = new Dog(x,y);
				case 3: animals[i] = new Lion(x,y);
				case 4: animals[i] = new Snake(x,y);
				case 5: animals[i] = new Goat(x,y);
				case 6: animals[i] = new Chicken(x,y);
				case 7: animals[i] = new Elephant(x,y);
				case 8: animals[i] = new Cow(x,y);
				case 9: animals[i] = new Hedgehog(x,y);
				case 10: animals[i] = new Rhino(x,y);
				case 11: animals[i] = new Frog(x,y);
				case 12: animals[i] = new Beetle(x,y);
			}
			
			nAnimal++;
		}
		
		
		else if (getTipeHabitat()=="water"){
			
			//random posisi awal, pastikan masih kosong
			//random dari listOfPosisiCage
			int nr;
			bool found = false;
			Cell * pos;
			while (!found){
				nr = rand() % cageArea;
				pos = getCagePosition(nr);

				//cek apa ada hewan yang udah di posisi itu
				found = isPositionEmpty(pos);
			}
			
			int x = pos->getX();cout<<pos->getX()<<endl;
			int y = pos->getY();
			int i = nAnimal;
			nr = rand() % 5 + 1;
			switch(nr){
				case 1: animals[i] = new Fish(x,y);
				case 2: animals[i] = new Crocodile(x,y);
				case 3: animals[i] = new Frog(x,y);
				case 4: animals[i] = new Duck(x,y);
				case 5: animals[i] = new Flyingfish(x,y);
			}
			
			nAnimal++;
		}else if (getTipeHabitat()=="air"){
			//random posisi awal, pastikan masih kosong
			//random dari listOfPosisiCage
			int nr;
			bool found = false;
			Cell * pos;
			while (!found){
				nr = rand() % cageArea;
				pos = getCagePosition(nr);

				//cek apa ada hewan yang udah di posisi itu
				found = isPositionEmpty(pos);
			}
			
			int x = pos->getX();
			int y = pos->getY();

			int i = nAnimal;
			nr = rand() % 7 + 1;
			switch(nr){
				case 1: animals[i] = new Beetle(x,y);
				case 2: animals[i] = new Bee(x,y);
				case 3: animals[i] = new Owl(x,y);
				case 4: animals[i] = new Eagle(x,y);
				case 5: animals[i] = new Butterfly(x,y);
				case 6: animals[i] = new Bird(x,y);
				case 7: animals[i] = new Flyingfish(x,y);
			}
			nAnimal++;
		}
	}
}
