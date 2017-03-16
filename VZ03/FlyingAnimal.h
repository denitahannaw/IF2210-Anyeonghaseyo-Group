#ifndef FLYING_ANIMAL_H
#define FLYING_ANIMAL_H

#include "Animal.h"
/**
* @class FlyingAnimal
* Merupakan Animal yang tinggal di udara
*/
class FlyingAnimal: public virtual Animal{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Snake
	* @param _y posisi y awal Snake
	*/
	FlyingAnimal(int _x,int _y);
	/**
	* @brief Copy Constructor
	*/
	FlyingAnimal(const FlyingAnimal&);
	/**
	* @brief Destructor
	*/
	virtual ~FlyingAnimal();
	
	//virtual void addBobot()=0;
	//virtual int getBobot()=0;
	//virtual char getSimbol()=0;

	/**
	* @brief Mendapatkan reaksi saat berinteraksi
	* dengan pengunjung
	*/
	virtual string interact()=0;
	/**
	* @brief Mendapatkan tipe habitat 
	* @return tipeHabitat
	*/
	virtual string getTipeHabitat();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	virtual string getTipeAnimal()=0;
	
protected:
	const string tipeHabitat = "air";
};
#endif
