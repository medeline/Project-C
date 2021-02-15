#include <stdio.h>

void main(){
  int counter,bil;
  counter=1;
  printf("Masukkan Bilangan= ");
  scanf("%d", &bil);

  while (bil>counter){
    printf(" %d", counter);
    counter=counter+1;
  }
}
