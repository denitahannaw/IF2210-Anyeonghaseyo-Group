#include "View.h"

using namespace std;

// ctor View
View::View(int len, int wid) : NBRS(len), NKOL(wid) {
	val = new char *[NBRS];
	for (int i=0; i<NBRS; i++)
		val[i] = new char [NKOL];

	for (int i=0; i<NBRS; i++) {
		for (int j=0; j<NKOL; j++)
			val[i][j] = ' ';
	}
}

// cctor View
View::View(const View& V) : NBRS(V.NBRS), NKOL(V.NKOL) {
	val = new char *[NBRS];
	for (int i=0; i<NBRS; i++)
		val[i] = new char [NKOL];

	for (int i=0; i<NBRS; i++) {
		for (int j=0; j<NKOL; j++)
			val[i][j] = V.val[i][j];
	}
}

// dtor View
View::~View() {
	for (int i=0; i<NBRS; i++) {
		delete [] val[i];
	}
	delete [] val;
}

// get elemen matriks Val
char View::getVal(int _x, int _y) {
	return val[_x][_y];
}

// set elemen matriks Val
void View::setVal(int i, int j, char c) {
	val[i][j] = c;
}

// get  panjang virtual zoo (baris)
int View::getNBRS() {
	return NBRS;
}

// get lebar virtual zoo (kolom)
int View::getNKOL() {
	return NKOL;
}

// print untuk tampilkan virtual zoo di layar
void View::printView() {
	for (int i=0; i<NBRS; i++) {
		for (int j=0; j<NKOL; j++) {
			cout << val[i][j];
		}
		cout << endl;
	}	
}

// print untuk tampilka virtual zoo dengan batas atas, bawah, kanan, dan kiri
void View::printView(int kiri,int atas,int kanan,int bawah) {
	for (int i=atas; i<bawah; i++) {
		for (int j=kiri; j<kanan; j++) {
			cout << val[i][j];
		}
		cout << endl;
	}	
}
