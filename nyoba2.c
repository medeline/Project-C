#include <stdio.h>

void main(){
  int counter,bil,jumlah;
  counter=1;
  jumlah=0;

  printf("Masukkan Bilangan= ");
  scanf("%d", &bil);
  while(bil>counter){
    jumlah=jumlah+counter;
    counter=counter+1;
  }
  printf("Jumlah= %d", jumlah);
}
