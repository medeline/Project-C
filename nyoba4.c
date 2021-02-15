#include <stdio.h>

void main(){
  int jumlah=1,bil,counter=1;

  printf("Masukkan Bilangan= ");
  scanf("%d", &bil);

  while(bil>=counter){
    jumlah=jumlah*counter;
    counter=counter+1;
  }
  printf("Jumlah Bilangan= %d", jumlah);
}
