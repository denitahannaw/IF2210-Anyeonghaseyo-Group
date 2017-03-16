#ifndef HEDGEHOG_H
#define HEDGEHOG_H

#include "LandAnimal.h"
#include "Herbivora.h"
/**
* @class Hedgehog
* Merupakan Animal yang tinggal di darat dan merupakan Herbivora
*/
class Hedgehog: public LandAnimal, public Herbivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Hedgehog
	* @param _y posisi y awal Hedgehog
	*/
	Hedgehog(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Hedgehog();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Hedgehog
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Hedgehog
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Hedgehog
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Hedgehog
	* @return musuh[i]
	*/
	string getMusuh(int i);
	/**
	* @brief Mendapatkan reaksi Hedgehog saat berinteraksi
	* dengan pengunjung
	* @return "duriduri"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "hedgehog";
	const char simbol = 'h';
	int bobot;
	string* musuh;
};
#endif
