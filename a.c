#include <stdio.h>

void main(){
  int bil,counter,jumlah;
  counter=1;
  jumlah=1;

  printf("Masukkan Bilangan= ");
  scanf("%d", &bil);

  while(bil>=counter){
    jumlah=jumlah*counter;
    counter=counter+1;
  }

  printf("Jumlah Perkalian Faktorial= %d", jumlah);
}
