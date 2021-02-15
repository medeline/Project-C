#include <conio.h>
#include <stdio.h>

void main()
{
  int bil,jumlah=1,counter=1;

  printf("Masukkan bilangan = ");
  scanf("%d", &bil);

    while (bil>=counter){
      jumlah=jumlah*counter;
      counter=counter+1;
    }
  printf("Hasil perkalian faktorial= %d", jumlah);
}
