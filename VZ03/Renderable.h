#ifndef RENDERABLE_H
#define RENDERABLE_H

/**
* @class Renderable
* Kelas abstrak Renderable merepresentasikan perilaku objek yang dapat
* digambar di atas layar
*/
class Renderable{
public:
	/**
	* Merupakan method virtual yang mengembalikan satu karakter
	* yang merepresentasikan bentuk objek
	*/
	virtual char render() = 0;
};
#endif