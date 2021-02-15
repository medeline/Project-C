#include <stdio.h>
#include <conio.h>
void sapanama(char nama[]) {
  printf("halo %s", nama);
}

int hitungumur(int lahir) {
  int umur;
  umur = 2017 - lahir;
  return umur;
}

void main () {
  char namauser[30];
  int tahunlahir;
  int usia;
  printf("masukan nama anda : ");
  scanf("%s", &namauser );
  printf("masukan tahun lahir : ");
  scanf("%d", &tahunlahir );

  sapanama(namauser);
  usia = hitungumur(tahunlahir);
  printf("\nusia anda=%d tahun", usia);
}
