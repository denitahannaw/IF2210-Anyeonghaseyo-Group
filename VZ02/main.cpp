#include <iostream>

#include "virtual_zoo.h"

using namespace std;
int main(){
	VirtualZoo* virtual_zoo = new VirtualZoo("input.txt");
	int n;
	
	// virtual_zoo->PrintVirtualZoo();
	
	cout << "1. Display Virtual Zoo All" << endl;
	cout << "2. Display Virtual Zoo " << endl;
	cout << "3. Tour Virtual Zoo" << endl;
	cout << "4. Count Total Animal Feeds" <<endl;
	cout << "0. Exit" << endl;
	cin >> n;
	if (n == 1) {
		virtual_zoo->PrintVirtualZoo();
	} else if (n == 2) {
		int kiri,atas,kanan,bawah;

		cout << "Batas kiri: "; cin >> kiri;
		cout << "Batas atas: "; cin >> atas;
		cout << "Batas kanan: "; cin >> kanan;
		cout << "Batas bawah: "; cin >> bawah;
		if (virtual_zoo->IsInRage(kiri,atas,kanan,bawah)) {
			virtual_zoo->PrintVirtualZoo(kiri,atas,kanan,bawah);
		} else {
			cout << "Out of rage " << endl;
		}
		 
	} else if (n == 3) {
		virtual_zoo->Tour();
	} else if (n == 4) {
		cout <<"Total makanan : "<< virtual_zoo->GetTotalMakanan() << endl;
	}
	
	return 0;
}
