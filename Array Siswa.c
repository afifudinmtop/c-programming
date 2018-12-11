#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
	int data[21];
  int n = 20;
	char ulang = 'Y';
	char pilih1; //pilih manual atau auto
  float hasil1; //hasil case 1
	float hasil2;
	float hasil3;
	float hasil4;
  int jumlah1 = 0;
	int jumlah2 = 0;
	int jumlah3 = 0;
	int jumlah4 = 0;

	while (ulang == 'Y' || ulang == 'y') {
    jumlah1 = 0;
		jumlah2 = 0;
		jumlah3 = 0;
		jumlah4 = 0;
		int x1 = 0;
		int x2 = 0;
		int x3 = 0;
		n = 20;
    {system("clear");}//Pilihan Manual/Auto
      printf("Input Manual atau Auto?\n");
		  printf("M/A \n");
		  scanf(" %c", &pilih1);
      {system("clear");}

		switch (pilih1) {//Hasil kalau M/A
		case 'M':
			printf("Anda memilih Manual\n");
      printf("Berapa data yang ingin di input\n");
      scanf(" %i", &n);
			printf("\n");
      for (size_t j = 1; j <= n; j++) {
        printf("Masukkan nilai anak %li", j);
				printf("\n");
        scanf(" %i", &data[j]);
				printf("\n");
      }
			break;

		case 'm':
			printf("Anda memilih Manual\n");
      printf("Berapa data yang ingin di input\n");
      scanf(" %i", &n);
			printf("\n");
      for (size_t j = 1; j <= n; j++) {
        printf("Masukkan nilai anak %li", j);
				printf("\n");
        scanf(" %i", &data[j]);
				printf("\n");
      }
			break;

		case 'A':
      printf("Anda memilih Automatic\n");
			data[1] = 65;
			data[2] = 65;
			data[3] = 70;
      data[4] = 95;
			data[5] = 70;
			data[6] = 34;
      data[7] = 80;
			data[8] = 95;
			data[9] = 23;
      data[10] = 56;
			data[11] = 98;
			data[12] = 100;
      data[13] = 34;
      data[14] = 55;
      data[15] = 82;
      data[16] = 81;
      data[17] = 56;
      data[18] = 45;
      data[19] = 33;
      data[20] = 100;
			break;

		case 'a':
			printf("Anda memilih Automatic\n");
      data[1] = 65;
			data[2] = 65;
			data[3] = 70;
      data[4] = 95;
			data[5] = 70;
			data[6] = 34;
      data[7] = 80;
			data[8] = 95;
			data[9] = 23;
      data[10] = 56;
			data[11] = 98;
			data[12] = 100;
      data[13] = 34;
      data[14] = 55;
      data[15] = 82;
      data[16] = 81;
      data[17] = 56;
      data[18] = 45;
      data[19] = 33;
      data[20] = 100;
			break;

		default:
			printf("Error: Salah Input\n");
			printf("Mohon Masukkan M/A\n");
			return 0;

		}

    printf("\n"); //Tabel Nilai
      printf("==============================\n");
      printf("|Anak   \t |Nilai Ujian|\n");
      printf("==============================\n");
      for (int i = 1; i <= n; i++) {
        printf("|Anak  %i\t |%11i|\n", i, data[i]);
      }
      printf("==============================\n");

    printf("\n");//Menu Utama
      //menentukan rata-rata dari seluruh anak
      for (int k = 1; k <= n; k++) {
        jumlah1 = jumlah1 + data[k];
      	}
      	hasil1 = (float)jumlah1/n;
      	printf("Hasil Rata-rata Seluruh Siswa %f\n", hasil1);

			//menentukan rata-rata dari siswa gasal
			for (int l = 1; l <= n; l=l+2) {
        jumlah2 = jumlah2 + data[l];
				x1++;
      	}
      	hasil2 = (float)jumlah2/x1;
      	printf("Hasil Rata-rata Seluruh Siswa ID Gasal %f\n", hasil2);

			//menentukan rata-rata dari siswa genap
			for (int m = 2; m <= n; m=m+2) {
        jumlah3 = jumlah3 + data[m];
				x2++;
      	}
      	hasil3 = (float)jumlah3/x2;
      	printf("Hasil Rata-rata Seluruh Siswa ID Genap %f\n", hasil3);

			//menentukan anak dengan nilai lebih dari sama dengan 65 (nilai>=65)
			printf("Anak dengan nilai lebih dari sama dengan 65 (nilai>=65) :\n");
				for (int p = 1; p <= n; p++) {
					if (data [p] >= 65) {
						printf(" %i,", p);
						jumlah4 = jumlah4 + data[p];
					}
					x3++;
				}
				hasil4 = (float)jumlah4/x3;
				printf("\nHasil Rata-rata Siswa (nilai>=65) = %f\n", hasil4);

		printf("\nMau ulang lagi?\n");//Pilihan ulang lagi
		  scanf(" %c", &ulang);
	}

	return 0;
}
