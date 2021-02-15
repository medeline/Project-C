#include <stdio.h>

void main(){
  int bil,counter,jumlah;
  counter=1;
  jumlah=0;

  printf("Masukkan Bilangan= ");
  scanf("%d", &bil);
  while(bil>=counter){
    if(bil%counter==0){
      jumlah=jumlah+1;
    }
    counter=counter+1;
  }
  if(jumlah==2){
    printf("Bilangan Ganjil");
  }
  else{
    printf("Bukan Bilangan Ganjil");
  }
}
