#ifndef RHINO_H
#define RHINO_H

#include "LandAnimal.h"
#include "Herbivora.h"
/**
* @class Snake
* Merupakan Animal yang tinggal di darat dan merupakan Karnivora
*/
class Rhino: public LandAnimal, public Herbivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Snake
	* @param _y posisi y awal Snake
	*/
	Rhino(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Rhino();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Snake
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Snake
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Snake
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Snake
	* @return musuh[i]
	*/
	string getMusuh(int i);
	/**
	* @brief Mendapatkan reaksi Snake saat berinteraksi
	* dengan pengunjung
	* @return "culacula"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "rhino";
	const char simbol = 'r';
	int bobot;
	string* musuh;
};
#endif
