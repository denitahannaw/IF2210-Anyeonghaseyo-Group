#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
	// harus kelipatan 20
	int WIDTH;
	int LENGTH;
	char** M;

	// baca input pengguna
	printf("LENGTH = ");
	scanf ("%d", &LENGTH);
	printf("WIDTH = ");
	scanf ("%d", &WIDTH);

	M = new char *[WIDTH];
	for (int i=0; i<WIDTH; i++)
		M[i] = new char [LENGTH];

	for (int i=0; i<WIDTH;i++) {
		for (int j=0; j<LENGTH; j++) {
			M[i][j]= ' ';
		}
	}

	int petak_width = WIDTH / 5;
	int petak_length = LENGTH / 5;

	// RESTOURANT di atas
	for (int i=0; i<petak_width/2; i++) {
		for (int j=petak_width/2-1; j<LENGTH-petak_width/2; j++) {
			M[i][j] = 'r';
		}
		printf("\n");
	}

	// RESTAURANT di bawah
	for (int i=WIDTH-petak_width/2; i<WIDTH; i++) {
		for (int j=petak_width/2-1; j<LENGTH-petak_width/2; j++) {
			M[i][j] = 'r';
		}
		printf("\n");
	}

	// PARK di kanan
	for (int i = 0; i<WIDTH-petak_width; i++) {
		for (int j=LENGTH-petak_length/2; j<LENGTH; j++) {
			M[i][j] = 'p';
		}
		printf("\n");
	}
	for (int i=WIDTH-petak_width/2; i<WIDTH; i++) {
		for (int j=LENGTH-petak_length/2; j<LENGTH; j++) {
			M[i][j] = 'p';
		}
		printf("\n");
	}

	// PARK di kiri
	for (int i = petak_width-1; i<WIDTH; i++) {
		for (int j=0; j<petak_length/2; j++) {
			M[i][j] = 'p';
		}
		printf("\n");
	}
	for (int i = 0; i<petak_width/2; i++) {
		for (int j=0; j<petak_length/2; j++) {
			M[i][j] = 'p';
		}
		printf("\n");
	}

	// WATER HABITAT
	int code = 1;
	int cek_i = petak_width*3/4-1;
	int cek_j = petak_length-1;
	while (code < 4) {
		for (int i=cek_i; i<cek_i+petak_width; i++) {
			for (int j=cek_j; j<cek_j+petak_length; j++) {
				M[i][j] = 'w';
			}
		}
		code++;
		cek_i += petak_width*5/4;
		cek_j += petak_length;
		if (cek_j > LENGTH-(petak_length*3/4)-1) {
			cek_j = petak_length-1;
		}
	}

	// AIR HABITAT
	code = 1;
	cek_i = petak_width*3/4-1;
	cek_j = petak_length*2-1;
	while (code < 4) {
		for (int i=cek_i; i<cek_i+petak_width; i++) {
			for (int j=cek_j; j<cek_j+petak_length; j++) {
				M[i][j] = 'a';
			}
		}
		code++;
		cek_i += petak_width*5/4;
		cek_j += petak_length;
		if (code == 3) {
			cek_j = petak_length-1;
		}
	}

	// LAND HABITAT
	code = 1;
	cek_i = petak_width*3/4-1;
	cek_j = petak_length*3-1;
	while (code < 4) {
		for (int i=cek_i; i<cek_i+petak_width; i++) {
			for (int j=cek_j; j<cek_j+petak_length; j++) {
				M[i][j] = 'a';
			}
		}
		code++;
		cek_i += petak_width*5/4;
		cek_j += petak_length;
		if (code == 2) {
			cek_j = petak_length-1;
		}
	}

	// PRINT HASIL
	for (int i=0; i<LENGTH; i++) {
		for (int j=0; j<WIDTH; j++)
			printf("%c", M[i][j]);
		printf("\n");
	}
	return 0;
}