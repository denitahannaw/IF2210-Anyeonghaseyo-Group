#include "Cage.h"

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
	nAnimal = 0;
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
* @brief Menentukan apakah suatu cell cage telah ditempati animal atau belum
* @param c Cell
* @return bool
*/
bool isPositionEmpty(Cell* c){
	int i=0;
	bool empty = true;
	while (i<nAnimal && empty){
		if (animals[i]->position == c){
			empty = false;
		}
		i++;
	}

	return empty;
}
/**
* @brief Setter
* Menambahkan 1 animal secara random berdasarkan tipeHabitat
*/
void Cage::createAnimal(){
	if (nAnimal < maxAnimal()){
		if (getTipeHabitat()=="landhabitat"){
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
				case 1: animals[i] = new Animal(x,y,"cat");
				case 2: animals[i] = new Animal(x,y,"dog");
				case 3: animals[i] = new Animal(x,y,"animal");
				case 4: animals[i] = new Animal(x,y,"snake");
				case 5: animals[i] = new Animal(x,y,"goat");
				case 6: animals[i] = new Animal(x,y,"chicken");
				case 7: animals[i] = new Animal(x,y,"elephant");
				case 8: animals[i] = new Animal(x,y,"cow");
				case 9: animals[i] = new Animal(x,y,"hedgehog");
				case 10: animals[i] = new Animal(x,y,"rhino");
				case 11: anilals[i] = new Animal(x,y,"frog");
				case 12: animals[i] = new Animal(x,y,"beetle");
			}
			
			nAnimal++;
		}else if (getTipeHabitat()=="waterhabitat"){
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
			nr = rand() % 5 + 1;
			switch(nr){
				case 1: animals[i] = new Animal(x,y,"fish");
				case 2: animals[i] = new Animal(x,y,"crocodile");
				case 3: animals[i] = new Animal(x,y,"frog");
				case 4: animals[i] = new Animal(x,y,"duck");
				case 5: animals[i] = new Animal(x,y,"flyingfish");
			}
			nAnimal++;
			
		}else if (getTipeHabitat()=="airhabitat"){
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
				case 1: animals[i] = new Animal(x,y,"beetle");
				case 2: animals[i] = new Animal(x,y,"bee");
				case 3: animals[i] = new Animal(x,y,"owl");
				case 4: animals[i] = new Animal(x,y,"eagle");
				case 5: animals[i] = new Animal(x,y,"butterfly");
				case 6: animals[i] = new Animal(x,y,"bird");
				case 7: animals[i] = new Animal(x,y,"flyingfish");
			}
			
			nAnimal++;
		}	
	}
	
}
