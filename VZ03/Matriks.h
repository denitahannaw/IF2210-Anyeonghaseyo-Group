#ifndef MATRIKS_H
#define MATRIKS_H

/**
* @class Matriks generic
*/
template <class T>
class Matriks{
public:
	/**
	* @brief Ctor
	*/
	Matriks();
	/**
	* @brief Ctor dengan parameter
	*/
	Matriks(int brs,int kol);
	/**
	* @brief Cctor
	*/
	Matriks(const Matriks& m);
	/**
	* @brief Dtor
	*/
	~Matriks();
	/**
	* @brief opr=
	*/
	Matriks& operator=(const Matriks& m);
	/**
	* @brief Getter BRS
	* @return BRS
	*/
	int getBRS();
	/**
	* @brief Getter KOL
	* @return KOL
	*/
	int getKOL();
	/**
	* @brief Getter val baris ke i dan kolom ke j
	* @param i Indeks baris
	* @param j Indeks kolom
	* @return T Value pada indeks i,j
	*/
	T getVal(int i, int j);
	/**
	* @brief Setter val pada baris ke i dan kolom ke j
	* @param i Indeks baris
	* @param j Indeks kolom
	*/
	void setVal(T v, int i, int j);

private:
	const int BRS, KOL;
	T** val;
};
#endif


/**
* @brief Ctor tanpa parameter.
* Membuat Matriks dengan ukuran BRS=100 dan KOL=100
*/
template <class T>
Matriks<T>::Matriks():BRS(100),KOL(100){
	val = new T*[BRS];
	for(int i=0; i<BRS; i++){
		val[i] = new T[KOL];
	}
}

/**
* @brief Ctor dengan parameter
*/
template <class T>
Matriks<T>::Matriks(int brs,int kol):BRS(brs),KOL(kol){
	val = new T*[BRS];
	for(int i=0; i<BRS; i++){
		val[i] = new T[KOL];
	}
}

/**
* @brief Cctor
*/
template <class T>
Matriks<T>::Matriks(const Matriks& m):BRS(m.BRS),KOL(m.KOL){
	val = new T*[BRS];
	for(int i=0; i<BRS; i++){
		val[i] = new T[KOL];
	}
}

/**
* @brief Dtor
*/
template <class T>
Matriks<T>::~Matriks(){
	delete [] val;
}

/**
* @brief Getter BRS
* @return BRS
*/
template <class T>
int Matriks<T>::getBRS(){
	return BRS;
}

/**
* @brief Getter KOL
* @return KOL
*/
template <class T>
int Matriks<T>::getKOL(){
	return KOL;
}

/**
* @brief Getter val baris ke i dan kolom ke j
* @param i Indeks baris
* @param j Indeks kolom
* @return T Value pada indeks i,j
*/
template <class T>
T Matriks<T>::getVal(int i, int j){
	return val[i][j];
}

/**
* @brief Setter val pada baris ke i dan kolom ke j
* @param i Indeks baris
* @param j Indeks kolom
*/
template <class T>
void Matriks<T>::setVal(T v, int i, int j){
	val[i][j] = v;
}