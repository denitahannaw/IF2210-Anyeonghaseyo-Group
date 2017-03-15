#include "View.h"

using namespace std;

View::View(int len, int wid) : NBRS(len), NKOL(wid) {
	val = new char *[NBRS];
	for (int i=0; i<NBRS; i++)
		val[i] = new char [NKOL];

	for (int i=0; i<NBRS; i++) {
		for (int j=0; j<NKOL; j++)
			val[i][j] = ' ';
	}
}

View::View(const View& V) : NBRS(V.NBRS), NKOL(V.NKOL) {
	val = new char *[NBRS];
	for (int i=0; i<NBRS; i++)
		val[i] = new char [NKOL];

	for (int i=0; i<NBRS; i++) {
		for (int j=0; j<NKOL; j++)
			val[i][j] = V.val[i][j];
	}
}

View::~View() {
	for (int i=0; i<NBRS; i++) {
		delete [] val[i];
	}
	delete [] val;
}
// View& View::operator=(const View& V) : NBRS(V.NBRS), NKOL(V.NKOL) {
// 	for (int i=0; i<NBRS; i++) {
// 		delete [] val[i];
// 	delete [] val;
	
// 	val = new char *[NBRS];
// 	for (int i=0; i<NBRS; i++)
// 		val[i] = new char [NKOL];

// 	for (int i=0; i<NBRS; i++) {
// 		for (int j=0; j<NKOL; j++)
// 			val[i][j] = V.val[i][j];
// 	}
// }

char View::getVal(int _x, int _y) {
	return val[_x][_y];
}

void View::setVal(int i, int j, char c) {
	val[i][j] = c;
}

int View::getNBRS() {
	return NBRS;
}

int View::getNKOL() {
	return NKOL;
}

void View::printView() {
	for (int i=0; i<NBRS; i++) {
		for (int j=0; j<NKOL; j++) {
			cout << val[i][j];
		}
		cout << endl;
	}	
}

void View::printView(int kiri,int atas,int kanan,int bawah) {
	for (int i=atas; i<bawah; i++) {
		for (int j=kiri; j<kanan; j++) {
			cout << val[i][j];
		}
		cout << endl;
	}	
}