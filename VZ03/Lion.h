#ifndef LION_H
#define LION_H

#include "LandAnimal.h"
#include "Karnivora.h"
/**
* @class Lion
* Merupakan Animal yang tinggal di darat dan merupakan Karnivora
*/
class Lion: public LandAnimal, public Karnivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Lion
	* @param _y posisi y awal Lion
	*/
	Lion(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Lion();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Lion
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Lion
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Lion
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Lion
	* @return musuh[i]
	*/
	string getMusuh(int i);
	/**
	* @brief Mendapatkan reaksi Lion saat berinteraksi
	* dengan pengunjung
	* @return "auuum"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "lion";
	const char simbol = 'l';
	int bobot;
	string* musuh;
};
#endif
