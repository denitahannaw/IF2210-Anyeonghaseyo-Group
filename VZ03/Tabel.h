#ifndef TABEL_H
#define TABEL_H

template <class T>
class Tabel{
public:
	/**
	* @brief Konstruktor tanpa parameter. 
	* Membangun tabel dengan ukuran default = 100
	*/
	Tabel();
	/**
	* @brief Konstruktor dengan parameter.
	* Membangun tabel dengan ukuran size
	* @param size ukuran tabel
	*/
	Tabel(int size);
	/**
	* @brief Cctor
	*/
	Tabel(const Tabel& t);
	/**
	* @brief Destructor
	*/
	~Tabel();
	/**
	* @brief Operator=
	*/
	Tabel& operator=(const Tabel& t);
	/**
	* @brief Getter size
	* @return size Ukuran tabel
	*/
	int getSize();
	/**
	* @brief Getter nData
	* @return nData Jumlah data saat ini
	*/
	int getNData();
	/**
	* @brief Getter data
	* @return T* Seluruh data yang ada
	*/
	T* getData();
	/**
	* @brief Getter data ke i
	* @param i indeks data yang diambil
	* @return T Data pada indeks i
	*/
	T getData(int i);
	/**
	* @brief Menambahkan data dengan nilai val
	* @param val nilai yang akan dimasukkan ke data
	*/
	void addData(T val);
	/**
	* @brief Mengirim true jika tabel kosong, dan false jika tabel penuh
	*/
	bool isEmpty();
	/**
	* @brief Mengirim true jika tabel penuh, dan false jika tabel kosong
	*/
	bool isFull();


private:
	int size; // ukuran tabel
	int nData; //jumlah data yang tersimpan dalam tabel
	T* data; // Data yang tersimpan dalam tabel 
};
#endif

/**
* @brief Konstruktor tanpa parameter. 
* Membangun tabel dengan ukuran default = 100
*/
template <class T>
Tabel<T>::Tabel(){
	size = 100;
	nData = 0;
	data = new T[size];
}

/**
* @brief Konstruktor dengan parameter.
* Membangun tabel dengan ukuran size
* @param size ukuran tabel
*/
template <class T>
Tabel<T>::Tabel(int size){
	this->size = size;
	nData = 0;
	data = new T[size];
}

/**
* @brief Cctor
*/
template <class T>
Tabel<T>::Tabel(const Tabel<T>& t){
	this->size = t.size;
	nData = t.nData;
	data = new T[size];

	for(int i=0; i<size; i++){
		data[i] = t.data[i];
	}
}

/**
* @brief Destructor
*/
template <class T>
Tabel<T>::~Tabel(){
	delete [] data;
}

/**
* @brief Operator=
*/
template <class T>
Tabel<T>& Tabel<T>::operator=(const Tabel<T>& t){
	delete [] data;

	this->size = t.size;
	nData = t.nData;
	data = new T[size];

	for(int i=0; i<size; i++){
		data[i] = t.data[i];
	}

	return *this;
}

/**
* @brief Getter size
* @return size Ukuran tabel
*/
template <class T>
int Tabel<T>::getSize(){
	return size;
}

/**
* @brief Getter nData
* @return nData Jumlah data saat ini
*/
template <class T>
int Tabel<T>::getNData(){
	return nData;
}

/**
* @brief Getter data
* @return T* Seluruh data yang ada
*/
template <class T>
T* Tabel<T>::getData(){
	return data;
}

/**
* @brief Getter data ke i
* @param i indeks data yang diambil
* @return T Data pada indeks i
*/
template <class T>
T Tabel<T>::getData(int i){
	return data[i];
}

/**
* @brief Menambahkan data dengan nilai val
* @param val nilai yang akan dimasukkan ke data
*/
template <class T>
void Tabel<T>::addData(T val){
	if (!isFull()){
		data[nData] = val;
		nData++;
	}
}

/**
* @brief Mengirim true jika tabel kosong, dan false jika tabel penuh
*/
template <class T>
bool Tabel<T>::isEmpty(){
	if (nData == 0){
		return true;
	}else{
		return false;
	}
}

/**
* @brief Mengirim true jika tabel penuh, dan false jika tabel kosong
*/
template <class T>
bool Tabel<T>::isFull(){
	if (nData == size){
		return true;
	}else{
		return false;
	}
}