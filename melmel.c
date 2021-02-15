#include <stdio.h>

void main(){
  int jumlah,bil,min;
  jumlah=0;

  printf("Masukkan Bilangan= ");
  scanf("%d", &bil);
  min=bil;

  while(bil>0){
    if(bil%2==1){
      jumlah=jumlah+bil;
    }
    if(bil<min && bil>=0){
      min=bil;
    }
    printf("Masukkan Bilangan= ");
    scanf("%d", &bil);
  }

  printf("\nJumlah Bilangan= %d", jumlah);
  printf("\nBilangan Terkecil= %d", min);
}
