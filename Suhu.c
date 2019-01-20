#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int fungsireamur(int num1){
	int hasilreamur;
	hasilreamur = ((float)4/5)*num1;
	return hasilreamur;
}

int fungsifarenheit(int num2){
	int hasilfarenheit;
	hasilfarenheit = (((float)9/5)*num2)+32;
	return hasilfarenheit;
}

int main() {
	char ulang;
	do {
		char pilih;
		int celcius[100];
		int reamur[100];
		int farenheit[100];
		int min = 1000;
		int max = 0;

		printf("\n"); //Database Celcius
			celcius[1] = 32;
			celcius[2] = 40;
			celcius[3] = 30;
			celcius[4] = 27;
			celcius[5] = 38;
			celcius[6] = 40;
			celcius[7] = 23;
			celcius[8] = 45;
			celcius[9] = 27;
			celcius[10] = 41;

		printf("\n");	//Database Reamur
			for (int i = 1; i <= 10; i++) {
				reamur[i] = fungsireamur(celcius[i]);
			}

		printf("\n");	//Database Farenheit
			for (int i = 1; i <= 10; i++) {
				farenheit[i] = fungsifarenheit(celcius[i]);
			}

		{system("clear");}
		printf("\n"); //Tabel Nilai
      printf("=====================================\n");
      printf("| No | Celcius | Reamur | Farenheit |\n");
      printf("=====================================\n");
      for (int i = 1; i <= 10; i++) {
        printf("| %2i |   %2i    |   %2i   |    %3i    |\n", i, celcius[i], reamur[i], farenheit[i]);
      }
      printf("=====================================\n");

		printf("\nPencarian nilai MIN dan MAX\n");
			printf("(R/F)");
			scanf(" %c", &pilih);

		switch (pilih) {
			case 'R':
				for (int i = 1; i <= 10; i++) {
					if (reamur[i] < min) {
						min = reamur[i];
					}
					else (reamur[i] > max) ;{
						max = reamur[i];
					}
				}
				printf("Data Suhu R meiliki nilai MINIMUM yaitu : %i\n", min);
				printf("Data Suhu R meiliki nilai MAXIMUM yaitu : %i\n", max);
				break;

			case 'r':
				for (int i = 1; i <= 10; i++) {
					if (reamur[i] < min) {
						min = reamur[i];
					}
					else (reamur[i] > max) ;{
						max = reamur[i];
					}
				}
				printf("Data Suhu r meiliki nilai MINIMUM yaitu : %i\n", min);
				printf("Data Suhu r meiliki nilai MAXIMUM yaitu : %i\n", max);
				break;

			case 'F':
				for (int i = 1; i <= 10; i++) {
					if (farenheit[i] < min) {
						min = farenheit[i];
					}
					else (farenheit[i] > max) ;{
						max = farenheit[i];
					}
				}
				printf("Data Suhu F meiliki nilai MINIMUM yaitu : %i\n", min);
				printf("Data Suhu F meiliki nilai MAXIMUM yaitu : %i\n", max);
				break;

			case 'f':
				for (int i = 1; i <= 10; i++) {
					if (farenheit[i] < min) {
						min = farenheit[i];
					}
					else (farenheit[i] > max) ;{
						max = farenheit[i];
					}
				}
				printf("Data Suhu F meiliki nilai MINIMUM yaitu : %i\n", min);
				printf("Data Suhu F meiliki nilai MAXIMUM yaitu : %i\n", max);
				break;

			default:printf("Error: Salah Input\n");
		}

		printf("\nApapakah anda ingin mengulang program?\n");
			printf("(Y/N)");
			scanf(" %c", &ulang);
	} while((ulang == 'Y') || (ulang == 'y'));

	return 0;
}
