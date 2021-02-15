#include <stdio.h>

void main(){
  int b1,b2,b3,jumlah;
  jumlah=0;
  
  printf("Masukkan bilangan= ");
  scanf("%d", &b1);
  printf("Masukkan bilangan= ");
  scanf("%d", &b2);
  printf("Masukkan bilangan= ");
  scanf("%d", &b3);

  if(b1%2==0){
    jumlah=jumlah+b1;
  }

  if(b2%2==0){
    jumlah=jumlah+b2;
  }

  if(b3%2==0){
    jumlah=jumlah+b3;
  }

  printf("Jumlah Bilangan genap= %d", jumlah);
}
