#include <stdio.h>

void main(){

int counter,bil,jumlah;
jumlah=0;
counter=1;

printf("Masukkan Bilangan= ");
scanf("%d", &bil);

while(bil>counter){
  jumlah=jumlah+counter;
  counter=counter+1;
}

printf("JUmlah Bilangan = %d", jumlah);
}
