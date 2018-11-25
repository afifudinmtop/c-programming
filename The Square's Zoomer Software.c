#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
	char ulang;
	do {
		double sisi = 100;
		double sisi_baru[100];
		double luas_baru[100];
		int n, i;
		double luas_awal;

		//clear screen
		{
			system("clear");
		}

		//opening
		printf("The Square's Zoomer Software by Apep\n");
		printf("Nilai Awal adalah 100 cm\n");
		printf("Masukkan nilai n kali pengecilan\n");
		scanf(" %i", &n);
		luas_awal = sisi*sisi;
		printf("\nLuas awal      = %lf cm", luas_awal);
		//loop
		for (i = 1; i <= n; i++) {
			sisi = sisi/2;
			sisi_baru[i] = ((sisi*sisi) + (sisi*sisi));
			sisi_baru[i] = sqrt(sisi_baru[i]);
			luas_baru[i] = sisi_baru[i] * sisi_baru[i];
			printf("\nPengecilan%3i  = %lf cm", i, luas_baru[i]);
		}

		//run the program again?
		printf("\nApapakah anda ingin mengulang program lagi?\n");
		printf("(Y/N)");
		scanf(" %c", &ulang);
	} while((ulang == 'Y') || (ulang == 'y'));
	return 0;
}
