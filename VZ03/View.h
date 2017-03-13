#ifndef _VIEW_H_
#define _VIEW_H_

#include <iostream>
using namespace std;

class View {
	public :
		View(int, int);
		View(const View&);
		~View();
		// View& operator=(const View&);
		char getVal(int, int);
		void setVal(int, int, char);
		int getNBRS();
		int getNKOL();
		void printView();
		// void printView(int, int);

	private :
		char** val;
		const int NBRS;
		const int NKOL;
};
#endif