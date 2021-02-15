#include <stdio.h>
#include <conio.h>

void main(){
  int bil,min,ganjil;
  ganjil=0;

  printf("Masukkan Bilangan= ");
  scanf("%d", &bil);
  min=bil;
  while(bil>0)
  {
      if(bil%2==1)
      {
        ganjil=ganjil+bil;
      }

      if(bil<min && bil>=0)
      {
        min=bil;
      }
      printf("Masukkan Bilangan= ");
      scanf("%d", &bil);
  }
printf("\nJumlah Bilangan Ganjil= %d", ganjil);
printf("\nBilangan Terkecil= %d", min);
}
