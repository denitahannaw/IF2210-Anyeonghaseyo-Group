#ifndef CAGE_H
#define CAGE_H

#include <string>
#include "Cell.h"
#include "Animal.h"

using namespace std;

/**
* @class Cage
* Merupakan container dari animal
*/

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