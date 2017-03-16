#ifndef BEE_H
#define BEE_H

#include "FlyingAnimal.h"
#include "Herbivora.h"
/**
* @class Bee
* Merupakan Animal yang tinggal di udara dan merupakan Herbivora
*/
class Bee: public FlyingAnimal, public Herbivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Bee
	* @param _y posisi y awal Bee
	*/
	Bee(int _x, int _y);
	/**
	* @brief Destructor
	*/
	~Bee();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Bee
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Bee
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Bee
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Bee
	* @return musuh[i]
	*/
	string getMusuh(int i);
	/**
	* @brief Mendapatkan reaksi Bee saat berinteraksi
	* dengan pengunjung
	* @return "ngggnggg"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "bee";
	const char simbol = 'z';
	int bobot;
	string* musuh;
};
#endif
