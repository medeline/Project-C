#include <stdio.h>

void main(){
  int bil;

  printf("Masukkan Bilangan= ");
  scanf("%d", &bil);

  if(bil%2==0){
    printf("Bilangan Genap");
  }
  else{
    printf("Bilangan Ganjil");
  }
}
