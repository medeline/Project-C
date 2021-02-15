#include <conio.h>
#include <stdio.h>

void main()
{
  int b1,b2,b3,hasil=0;

  printf("Masukkan bilangan pertama = ");
  scanf("%d", &b1);
  printf("Masukkan bilangan kedua = ");
  scanf("%d", &b2);
  printf("Masukkan bilangan ketiga = ");
  scanf("%d", &b3);

  if (b1%2==1)
  {
    hasil=hasil+1;
  }

  if (b2%2==1)
  {
    hasil=hasil+1;
  }

  if (b3%2==1)
  {
    hasil=hasil+1;
  }
  printf("banyaknya bilangan ganjil= %d", hasil);
}
