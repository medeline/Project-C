#include <stdio.h>

void main()
{
  int sks,js;
  float bobot,bs,ip;
  js=0;
  bs=0;
  printf("Masukkan SKS Anda = ");
  scanf("%d", &sks);
  printf("masukkan Nilai Anda = ");
  scanf("%f", &bobot);
    while (sks>0 && bobot>0 && js<=24) {
      js=js+sks;
      bs=bs+(bobot*sks);
      printf("Masukkan SKS Anda = ");
      scanf("%d", &sks);
      printf("masukkan Nilai Anda = ");
      scanf("%f", &bobot);
    }
  ip=bs/js;
  printf("IP anda adalah = %f", ip);
}
