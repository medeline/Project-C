#include <stdio.h>

int main()
{
  int b1,b2,b3,hasil=0;

  printf("Masukkan bilangan pertama = ");
  scanf("%d", &b1);
  printf("Masukkan bilangan kedua = ");
  scanf("%d", &b2);
  printf("Masukkan bilangan ketiga = ");
  scanf("%d", &b3);

  if (b1%2==0)
  {
    hasil=hasil+b1;
  }

  if (b2%2==0)
  {
    hasil=hasil+b2;
  }

  if (b3%2==0)
  {
    hasil=hasil+b3;
  }
  printf("Jumlah bilangan genap= %d", hasil);

  return 0;
}
