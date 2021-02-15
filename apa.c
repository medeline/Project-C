#include <stdio.h>

void main(){
  int maks,bil;
  maks=0;

printf("Masukkan Bilangan");
scanf("%d", &bil);
  while(bil>0){
    if(bil>maks){
      maks=bil;
    }
    printf("Masukkan Bilangan");
    scanf("%d", &bil);
  }
  printf("Nilai Maksimum= %d", maks);
}
