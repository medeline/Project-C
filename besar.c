#include <conio.h>
#include <stdio.h>

void main (){
  int min, jmganjil=0;
  float bil;

  printf("Masukkan Bilangan= ");
  scanf("%f", &bil);

  while (bil>0) {
      if (bil%2=1) {
        jmganjil=jmganjil+bil;
      }
      if (bil<min) {
        min=bil;
      }
    printf("Masukkan Bilangan= ");
    scanf("%f", &bil);
  }
  printf("JUmlah bilangan ganjil= %d", jmganjil );
}
