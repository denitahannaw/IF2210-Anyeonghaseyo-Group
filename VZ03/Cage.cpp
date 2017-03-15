#include "Cage.h"

//Cage::Cage(){}
/**
* @brief Constructor
* Membangun cage
* @param simbol Simbol dari cage
* @param tipehabitat Tipe habitat cage
* @param cageArea Luas cage / jumlah cell
*/
Cage::Cage(char simbol, string tipeHabitat){
	this->simbol = simbol;
	this->tipeHabitat = tipeHabitat;

	listOfCagePosition = new Cell*[cageArea];
	animals = new Animal*[getMaxAnimal()];
	nAnimal = 0;
	nArea = 0;
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
* @brief Getter cageArea.
* Mendapatkan banyak petak maksimal yang dapat dibangun
* @return cageArea 
*/
int Cage::getCageArea(){
	return cageArea;
}

/**
* @brief Getter nArea.
* Mendapatkan jumlah petak yang telah dibangun
* @return nArea
*/
int Cage::getNArea(){
	return nArea;
}

/**
* @brief Getter nAnimal.
* Mendapatkan jumlah Animal yang terdapat pada cage
* @return nAnimal
*/
int Cage::getNAnimal(){
	return nAnimal;
}

/**
* @brief Getter tipeHabitat
* Mendapatkan tipe habitat Cage
* @return tipeHabitat
*/
string Cage::getTipeHabitat(){
	return tipeHabitat;
}

/**
* @brief Getter Cage Position
* Mendapatkan listOfCagePosition[i]
* @param i index listOfCagePosition
* @return listOfCagePosition[i]
*/
Cell* Cage::getCagePosition(int i){
	return listOfCagePosition[i];
}

/**
* @brief Getter Animal
* Mendapatkan Animal pada indeks i (animals[i])
* @param i Index Animal yang akan diambil
* @return animals[i]
*/
Animal* Cage::getAnimal(int i){
	return animals[i];
}

/**
* @brief max animal
* Maksimal animal dalam cage = 30% dari cageArea
* @return 30%*cageArea;
*/
int Cage::getMaxAnimal(){
	return 30*nArea/100;
}

int Cage::getTotalMakanan() {
	int total_makanan = 0;
	for(int i = 0; i < nAnimal; i++) {
		total_makanan = total_makanan + animals[i]->getBobot();
	}
	return total_makanan;
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
* @brief Setter listOfCagePosition.
* Menambahkan posisi cell tempat didirikannya cage
* @param position Posisi cage
*/
void Cage::addCagePosition(Cell* position){
	if (nArea < getCageArea()){
		listOfCagePosition[nArea] = position;	
		nArea++;
	}
}

/**
* @brief Setter animals.
* Menambahkan Animal dalam cage jika masih bisa ditambahkan.
* Harus dipastikan jumlah Animal tidak melebihi kapasitasnya
* @param anim Animal yang akan ditambahkan
*/
void Cage::addAnimal(Animal* anim){
	// cout << getMaxAnimal() <<" "<< nArea << endl;
	if (nAnimal < getMaxAnimal()){
		animals[nAnimal] = anim;
		nAnimal++;
		// cout <<"dari add animal: " <<nAnimal<<endl;
	}
}

/**
* @brief Menentukan apakah suatu cell cage telah ditempati animal atau belum
* @param c Cell
* @return true jika posisi c belum ditempati animal,
*		  false jika sebaliknya
*/
bool Cage::isPositionEmpty(Cell* c){
	int i=0;
	bool empty = true;
	while (i<nAnimal && empty){
		if ((animals[i]->getX() == c->getX()) && (animals[i]->getY() == c->getY())){
			empty = false;
			
		} else {
			i++;	
		}
		// cout << animals[i]->getX() <<" "<< c->getX()<<" ";
		// cout << animals[i]->getY() <<" "<< c->getY()<<" ";
		// cout << empty << endl;
	}

	return empty;
}

bool Cage::isPositionInCage(int x, int y) {
	int i = 0;
	bool found = false;
	while (i < nArea && !found) {
		if (listOfCagePosition[i]->getX() == x && listOfCagePosition[i]->getY() == y) {
			found = true;
		}
		i++;
	}
	return found;
}

/**
* @brief getter SIMBOL
* Mengembalikan nilai SIMBOL
* @return SIMBOL
*/
char Cage::render(){
	return simbol;
}

