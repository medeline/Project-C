#include <conio.h>
#include <stdio.h>

void main()
{
  int bil,counter,jumlah=0;

  printf("Masukkan bilangan= ");
  scanf("%d", &bil);
  counter=bil-1;
    while(counter>0)
    {
      if (counter%2==1) {
        jumlah=jumlah+counter;
        counter=counter-1;
      }
      else{
        counter=counter-1;
      }
    }
    printf("Jumlah blangan ganjil kurang dari masukkan= %d", jumlah);

}
