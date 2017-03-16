#ifndef CHICKEN_H
#define CHICKEN_H

#include "LandAnimal.h"
#include "Omnivora.h"
/**
* @class Chicken
* Merupakan Animal yang tinggal di darat dan merupakan Omnivora
*/
class Chicken: public LandAnimal, public Omnivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Chicken
	* @param _y posisi y awal Chicken
	*/
	Chicken(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Chicken();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Chicken
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Chicken
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Chicken
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Chicken
	* @return musuh[i]
	*/
	string getMusuh(int i);
	/**
	* @brief Mendapatkan reaksi Chicken saat berinteraksi
	* dengan pengunjung
	* @return "chipchip"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "chicken";
	const char simbol = 'n';
	int bobot;
	string* musuh;
};
#endif
