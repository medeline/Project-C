#include <stdio.h>

void main(){
  int bil,counter,jumlah;
  jumlah=0;
  counter=1;

  printf("Masukkan Bilangan= ");
  scanf("%d", &bil);

  while(bil>counter){
    if(counter%2==1){
      jumlah=jumlah+counter;
    }
    counter=counter+1;
  }
  printf("Jumlah Bilangan Ganjil= %d", jumlah);
}
