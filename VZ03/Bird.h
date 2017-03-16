#ifndef BIRD_H
#define BIRD_H

#include "LandAnimal.h"
#include "FlyingAnimal.h"
#include "Karnivora.h"
/**
* @class Bird
* Merupakan Animal yang tinggal di darat dan merupakan Karnivora
*/
class Bird: public LandAnimal, public FlyingAnimal, public Karnivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Bird
	* @param _y posisi y awal Bird
	*/
	Bird(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Bird();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Bird
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Bird
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Bird
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Bird
	* @return musuh[i]
	*/
	string getMusuh(int i);

	// int getX();
	// int getY();
	// void setX(int);
	// void setY(int);
	
	/**
	* @brief Mendapatkan reaksi Bird saat berinteraksi
	* dengan pengunjung
	* @return "cuitcuit"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	// string getTipeHabitat();
	
protected:
	const string tipeAnimal = "bird";
	const char simbol = 'b';
	int bobot;
	string* musuh;
};
#endif
