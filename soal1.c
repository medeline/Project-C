#include <conio.h>
#include <stdio.h>

void main()
{
  int bil;
  int counter;
  int jumlah=0;

  printf("Masukkan bilangan= ");
  scanf("%d", &bil);
  counter=bil-1;
    while(counter>0)
    {
      jumlah=jumlah+counter;
      counter=counter-1;
    }
    printf("Jumlah blangan kurang dari masukkan= %d", jumlah);

}
