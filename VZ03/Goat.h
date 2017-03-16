#ifndef GOAT_H
#define GOAT_H

#include "LandAnimal.h"
#include "Herbivora.h"
/**
* @class Goat
* Merupakan Animal yang tinggal di darat dan merupakan Karnivora
*/
class Goat: public LandAnimal, public Herbivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Goat
	* @param _y posisi y awal Goat
	*/
	Goat(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Goat();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Goat
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Goat
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Goat
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Goat
	* @return musuh[i]
	*/
	string getMusuh(int i);
	/**
	* @brief Mendapatkan reaksi Goat saat berinteraksi
	* dengan pengunjung
	* @return "embeee"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "goat";
	const char simbol = 'g';
	int bobot;
	string* musuh;
};
#endif
