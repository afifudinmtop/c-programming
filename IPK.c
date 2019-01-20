#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int kali(int num1, int num2){
	int hasilkali;
	hasilkali = num1*num2;
	return hasilkali;
}

float bagi(float num3, float num4){
	float hasilbagi;
	hasilbagi = (float)num3/num4;
	return hasilbagi;
}

int main() {
	char ulang;
	do {
		int sksnilai[100];
		printf("\n");//Database matkul
			char matkul1[] = "Robotika I";
			char matkul2[] = "Mikrokontroler";
			char matkul3[] = "Algoritma Pemrograman";
			char matkul4[] = "Basis Data";
			char matkul5[] = "Struktur data";
			char matkul6[] = "Interfacing";
			char matkul7[] = "Sensor dan Tranduser";
			char matkul8[] = "Mekatronika";

		printf("\n");//Database SKS
			int sks[100];
			sks[1] = 3;
			sks[2] = 4;
			sks[3] = 4;
			sks[4] = 3;
			sks[5] = 2;
			sks[6] = 3;
			sks[7] = 3;
			sks[8] = 4;

		printf("\n");//Database Grade
			char grade1 = 'A';
			char grade2 = 'A';
			char grade3 = 'B';
			char grade4 = 'C';
			char grade5 = 'C';
			char grade6 = 'A';
			char grade7 = 'A';
			char grade8 = 'A';

		printf("\n");//Database Nilai
			int nilai[100];
			nilai[1] = 4;
			nilai[2] = 4;
			nilai[3] = 3;
			nilai[4] = 2;
			nilai[5] = 2;
			nilai[6] = 4;
			nilai[7] = 4;
			nilai[8] = 4;

		{system("clear");}

		printf("\n");//Scan Grade
			printf("\nMasukkan Nilai %s\n", matkul6);
			scanf(" %c", &grade6);
			printf("\nMasukkan Nilai %s\n", matkul7);
			scanf(" %c", &grade7);
			printf("\nMasukkan Nilai %s\n", matkul8);
			scanf(" %c", &grade8);

		printf("\n");//Konversi nilai baru
			switch (grade6) {
				case 'A':nilai[6]=4;break;
				case 'a':nilai[6]=4;break;
				case 'B':nilai[6]=3;break;
				case 'b':nilai[6]=3;break;
				case 'C':nilai[6]=2;break;
				case 'c':nilai[6]=2;break;
				case 'D':nilai[6]=1;break;
				case 'd':nilai[6]=1;break;
				case 'E':nilai[6]=0;break;
				case 'e':nilai[6]=0;break;
				default:printf("Error: Salah Input\n");
			}
			switch (grade7) {
				case 'A':nilai[7]=4;break;
				case 'a':nilai[7]=4;break;
				case 'B':nilai[7]=3;break;
				case 'b':nilai[7]=3;break;
				case 'C':nilai[7]=2;break;
				case 'c':nilai[7]=2;break;
				case 'D':nilai[7]=1;break;
				case 'd':nilai[7]=1;break;
				case 'E':nilai[7]=0;break;
				case 'e':nilai[7]=0;break;
				default:printf("Error: Salah Input\n");
			}
			switch (grade8) {
				case 'A':nilai[8]=4;break;
				case 'a':nilai[8]=4;break;
				case 'B':nilai[8]=3;break;
				case 'b':nilai[8]=3;break;
				case 'C':nilai[8]=2;break;
				case 'c':nilai[8]=2;break;
				case 'D':nilai[8]=1;break;
				case 'd':nilai[8]=1;break;
				case 'E':nilai[8]=0;break;
				case 'e':nilai[8]=0;break;
				default:printf("Error: Salah Input\n");
			}

		printf("\n");//database sksnilai
			for (int i = 1; i <= 8; i++) {
				sksnilai[i] = kali(sks[i], nilai[i]);
			}

		printf("\n");//TOTAL SKS * Nilai
			int total = 0;
			for (int i = 1; i <= 8; i++) {
				total = total+sksnilai[i];
			}

		printf("\n");//TOTAL SKS
			int totalsks = 0;
			for (int i = 1; i <= 8; i++) {
				totalsks = totalsks+sks[i];
			}

		printf("\n");//hitung besar ipk
			float ipk = bagi(total, totalsks);

		printf("\n");//nilai A
			int nilaia = 0;
			for (int i = 1; i <=8; i++) {
				if (nilai[i] == 4) {
					nilaia++;
				}
			}

		printf("\n");//nilai C
			int nilaic = 0;
			for (int i = 1; i <=8; i++) {
				if (nilai[i] == 2) {
					nilaic++;
				}
			}

		{system("clear");}
		printf("\n"); //Tabel Nilai
      printf("=========================================================\n");
      printf("|No |Mata Kuliah\t\t|SKS|Nilai|SKS*Nilai\t|\n");
      printf("=========================================================\n");
      printf("|1  |%s\t\t\t|%i  |%c    |%i\t\t| \n", matkul1, sks[1], grade1, sksnilai[1]);
			printf("|2  |%s\t\t|%i  |%c    |%i\t\t| \n", matkul2, sks[2], grade2, sksnilai[2]);
			printf("|3  |%s\t|%i  |%c    |%i\t\t| \n", matkul3, sks[3], grade3, sksnilai[3]);
			printf("|4  |%s\t\t\t|%i  |%c    |%i\t\t| \n", matkul4, sks[4], grade4, sksnilai[4]);
			printf("|5  |%s\t\t|%i  |%c    |%i\t\t| \n", matkul5, sks[5], grade5, sksnilai[5]);
			printf("|6  |%s\t\t|%i  |%c    |%i\t\t| \n", matkul6, sks[6], grade6, sksnilai[6]);
			printf("|7  |%s\t|%i  |%c    |%i\t\t| \n", matkul7, sks[7], grade7, sksnilai[7]);
			printf("|8  |%s\t\t|%i  |%c    |%i\t\t| \n", matkul8, sks[8], grade8, sksnilai[8]);
			printf("---------------------------------------------------------\n");
			printf("     TOTAL SKS * Nilai                    |%i\t\t|\n", total);
			printf("=========================================================\n");

		printf("IPK     : %f\n", ipk);
		printf("Nilai A : %i\n", nilaia);
		printf("Nilai C : %i\n", nilaic);

		printf("\nApapakah anda ingin mengulang program?\n");
		printf("(Y/N)");
		scanf(" %c", &ulang);
	} while((ulang == 'Y') || (ulang == 'y'));

	return 0;
}
