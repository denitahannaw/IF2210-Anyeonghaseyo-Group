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
		delete [] listOfCagePosition[i];
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
* @brief Setter
* Menambahkan animal dalam cage
* @param anim Animal yang akan ditambahkan
* @param i Indeks animals ke i
*/
void Cage::addAnimal(Animal* anim, int i){
	animals[i] = anim;
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
				case 1: addAnimal(new Cat(x,y), i);
				case 2: addAnimal(new Dog(x,y), i);
				case 3: addAnimal(new Lion(x,y), i);
				case 4: addAnimal(new Snake(x,y), i);
				case 5: addAnimal(new Goat(x,y), i);
				case 6: addAnimal(new Chicken(x,y), i);
				case 7: addAnimal(new Elephant(x,y), i);
				case 8: addAnimal(new Cow(x,y), i);
				case 9: addAnimal(new Hedgehog(x,y), i);
				case 10: addAnimal(new Rhino(x,y), i);
				case 11: addAnimal(new Frog(x,y), i);
				case 12: addAnimal(new Beetle(x,y), i);
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
			
			int x = pos->getX();cout<<x<<endl;
			int y = pos->getY();cout<<y<<endl;
			int i = nAnimal;
			nr = rand() % 5 + 1;
			Animal* anim = new Fish(x,y);
			cout<<anim->getX()<<endl;
			// switch(nr){
			// 	case 1: addAnimal(new Fish(x,y), i);
			// 	case 2: addAnimal(new Crocodile(x,y), i);
			// 	case 3: addAnimal(new Frog(x,y), i);
			// 	case 4: addAnimal(new Duck(x,y), i);
			// 	case 5: addAnimal(new Flyingfish(x,y), i);
			// }
			
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
				case 1: addAnimal(new Beetle(x,y), i);
				case 2: addAnimal(new Bee(x,y), i);
				case 3: addAnimal(new Owl(x,y), i);
				case 4: addAnimal(new Eagle(x,y), i);
				case 5: addAnimal(new Butterfly(x,y), i);
				case 6: addAnimal(new Bird(x,y), i);
				case 7: addAnimal(new Flyingfish(x,y), i);
			}
			nAnimal++;
		}
	}
}
