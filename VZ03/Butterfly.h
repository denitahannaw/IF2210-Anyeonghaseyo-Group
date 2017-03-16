#ifndef BUTTERFLY_H
#define BUTTERFLY_H

#include "FlyingAnimal.h"
#include "Herbivora.h"
/**
* @class Butterfly
* Merupakan Animal yang tinggal di udara dan merupakan Herbivora
*/
class Butterfly: public FlyingAnimal, public Herbivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Butterfly
	* @param _y posisi y awal Butterfly
	*/
	Butterfly(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Butterfly();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Butterfly
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Butterfly
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Butterfly
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Butterfly
	* @return musuh[i]
	*/
	string getMusuh(int i);
	/**
	* @brief Mendapatkan reaksi Butterfly saat berinteraksi
	* dengan pengunjung
	* @return "flyfly"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "butterfly";
	const char simbol = 't';
	int bobot;
	string* musuh;
};
#endif
