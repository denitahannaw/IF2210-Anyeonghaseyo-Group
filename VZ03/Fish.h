#ifndef FISH_H
#define FISH_H

#include "WaterAnimal.h"
#include "Omnivora.h"
/**
* @class Fish
* Merupakan Animal yang tinggal di air dan merupakan Omnivora
*/
class Fish: public WaterAnimal, public Omnivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Fish
	* @param _y posisi y awal Fish
	*/
	Fish(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Fish();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Fish
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Fish
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Fish
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Fish
	* @return musuh[i]
	*/
	string getMusuh(int i);
	/**
	* @brief Mendapatkan reaksi Fish saat berinteraksi
	* dengan pengunjung
	* @return "wetwet"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "fish";
	const char simbol = 'i';
	int bobot;
	string* musuh;
};
#endif
