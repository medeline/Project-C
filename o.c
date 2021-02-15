#include <stdio.h>

void main(){
  int bil,min,jumlah;
  jumlah=0;
  min=0;

  printf("Masukkan Bilangan= ");
  scanf("%d", jumlah);
  min=bil;

  while(bil>0){
    if(bil%2==1){
      jumlah=jumlah+bil;
    }
    if(bil<min){
      min=bil;
    }
    printf("Masukkan Bilangan= ");
    scanf("%d", jumlah);
  }
  printf("jumlah bilangan ganjil= %d", jumlah);
  printf("bilangan terkecil= %d", min);
}
