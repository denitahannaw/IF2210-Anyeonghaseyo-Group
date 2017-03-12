#ifndef CAGE_H
#define CAGE_H

#include <string>
#include "Cell.h"
#include "Cat.h" //1
#include "Dog.h" //2
#include "Lion.h" //3
#include "Snake.h" //4
#include "Goat.h" //5
#include "Chicken.h" //6
#include "Elephant.h" //7
#include "Cow.h" //8
#include "Hedgehog.h" //9
#include "Rhino.h" //10
#include "Fish.h" //11
#include "Crocodile.h" //12
#include "Frog.h" //13
#include "Duck.h" //14
#include "Beetle.h" //15
#include "Bee.h" //16
#include "Owl.h" //17
#include "Eagle.h" //18
#include "Butterfly.h" //19
#include "Bird.h" //20
#include "FlyingFish.h" //21

using namespace std;

class Cage: public Renderable{
public:
	//Cage();
	/**
	* @brief Constructor
	* Membangun cage
	* @param simbol Simbol dari cage
	* @param tipehabitat Tipe habitat cage
	* @param cageArea Luas cage / jumlah cell
	*/
	Cage(char simbol, string tipeHabitat, int cageArea);

	/**
	* @brief Destructor
	*/
	~Cage();

	/**
	* @brief Setter
	* Menambahkan posisi cell tempat didirikannya cage
	* @param position Posisi cage
	*/
	void addCagePosition(Cell* position, int i);

	/**
	* @brief Getter
	* Mendapatkan cageArea
	* @return cageArea
	*/
	int getCageArea();

	/**
	* @brief Getter
	* Mendapatkan tipeHabitat
	* @return tipeHabitat
	*/
	string getTipeHabitat();

	/**
	* @brief Getter
	* Mendapatkan listOfCagePosition[i]
	* @param i index listOfCagePosition
	* @return listOfCagePosition[i]
	*/
	Cell* getCagePosition(int i);

	/**
	* @brief Setter
	* Set cageArea=area
	* @param area cageArea baru
	*/
	void setCageArea(int area);

	/**
	* @brief getter SIMBOL
	* Mengembalikan nilai SIMBOL
	* @return SIMBOL
	*/
	char render();

	/**
	* @brief max animal
	* Maksimal animal dalam cage = 30% dari cageArea
	* @return 30%*cageArea;
	*/
	int maxAnimal();

	/**
	* @brief Menentukan apakah suatu cell cage telah ditempati animal atau belum
	* @param c Cell
	* @return bool
	*/
	bool isPositionEmpty(Cell* c);
	
	/**
	* @brief Setter
	* Menambahkan 1 animal secara random berdasarkan tipeHabitat
	*/
	void createAnimal();

private:
	char simbol;
	string tipeHabitat;
	int cageArea;
	int nAnimal;
	Cell ** listOfCagePosition;
	Animal ** animals;
};

#endif