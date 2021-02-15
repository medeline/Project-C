#include <stdio.h>

void main(){
  int counter,jumlah,bil;

  printf("masukkan Bilangan= ");
  scanf("%d", &bil);

  while(bil>0){
    if(bil%2==1){
      jumlah=jumlah+bil;
    }
    printf("masukkan Bilangan= ");
    scanf("%d", &bil);
  }
  printf("Jumlah Bilangan Ganjil= %d", jumlah);
}
