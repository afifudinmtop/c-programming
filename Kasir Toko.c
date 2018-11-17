#include <stdio.h>
#include <stdlib.h>
int main() {

  char pelanggan;
  char z;
  int item;
  int harga1 = 35000;
  int harga2 = 50000;
  int harga3 = 30000;
  int harga4 = 45000;
  int i;
  int unit1[99];
  int total1 = 0;
  int unit2[99];
  int total2 = 0;
  int unit3[99];
  int total3 = 0;
  int unit4[99];
  int total4 = 0;
  int total_harga1;
  int total_harga2;
  int total_harga3;
  int total_harga4;

  //opening
  printf("Selamat datang di Ma'arif Tech Store\n");

  //input pelanggan atau bukan
  printf("Ketik 'P' jika anda pelanggan tetap\n");
  printf("Ketik 'U' jika anda konsumen umum\n");
  printf("(P/U)");
  scanf("%c", &pelanggan);

  //clear screen
  {
    system("clear");
    //system("cls");
  }

  //output
  switch (pelanggan) {
    case 'P':
    printf("Anda adalah Pelanggan Tetap\n");
    break;

    case 'p':
    printf("Anda adalah Pelanggan Tetap\n");
    break;

    case 'U':
    printf("Anda adalah Konsumen Umum\n");
    break;

    case 'u':
    printf("Anda adalah Konsumen Umum\n");
    break;

    //Jika input selain P/U
    default:
    printf("Error: Salah Input\n");
    printf("Mohon Masukkan P/U\n");
    return 0;

  }

  //Pemilihan Item
  for (i = 1; i < 13 ; i++) {
      printf("\nPilih item ke%d\n", i);
      printf("1. Motor Servo\n");
      printf("2. Mikrokontroller ARDUINO\n");
      printf("3. Sensor Jarak\n");
      printf("4. Sensor Suara\n");
      printf("(1-4)");
      scanf("%i", &item);
      if (!((item == 1)||(item == 2)||(item == 3)||(item == 4))) {
        printf("Error: Salah Input\n");
        printf("Mohon Masukkan 1/2/3/4\n");
        return 0;
      }

      //PILIH JENIS ITEM YANG MAU DIBELI
      switch (item) {
        case 1:
        printf("Motor Servo\n");
        printf("Berapa Motor Servo yang anda beli?\n");
        scanf("%d", &unit1[i]);
        total1 = unit1[i] + total1;
        break;

        case 2:
        printf("Mikrokontroller ARDUINO\n");
        printf("Berapa Mikrokontroller ARDUINO yang anda beli?\n");
        scanf("%d", &unit2[i]);
        total2 = unit2[i] + total2;
        break;

        case 3:
        printf("Sensor Jarak\n");
        printf("Berapa Sensor Jarak yang anda beli?\n");
        scanf("%d", &unit3[i]);
        total3 = unit3[i] + total3;
        break;

        case 4:
        printf("Sensor Suara\n");
        printf("Berapa Sensor Suara yang anda beli?\n");
        scanf("%d", &unit4[i]);
        total4 = unit4[i] + total4;
        break;
      }

      //VERIVIKASI ADD MORE ITEM OR NOT
      printf("Tambah item yg lain?\n");
      printf("(Y/N)");
      scanf(" %c", &z);
      if (z == 'N') {
        break;
      }
      printf("\n");
    }

  printf("-------------------------------CHECKOUT PEMBELIAN---------------------\n");
  printf("Jumlah Motor Servo            : %d\n", total1);
  printf("Harga per unit                : %d\n", harga1);
  total_harga1 = total1*harga1;
  printf("Total                         : %d\n", total_harga1);
  printf("\n");

  printf("Jumlah Mikrokontroller ARDUINO: %d\n", total2);
  printf("Harga per unit                : %d\n", harga2);
  total_harga2 = total2*harga2;
  printf("Total                         : %d\n", total_harga2);
  printf("\n");

  printf("Jumlah Sensor Jarak           : %d\n", total3);
  printf("Harga per unit                : %d\n", harga3);
  total_harga3 = total3*harga3;
  printf("Total                         : %d\n", total_harga3);
  printf("\n");

  printf("Jumlah Sensor Suara           : %d\n", total4);
  printf("Harga per unit                : %d\n", harga4);
  total_harga4 = total4*harga4;
  printf("Total                         : %d\n", total_harga4);
  printf("\n");

  printf("Exit loop\n");

  return 0;
}
