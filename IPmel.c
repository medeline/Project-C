#include <stdio.h>

void main () {
  int jumlahsks=0,sks;
  float IP;
  float bs=0;
  float bobot;

  printf("masukkan SKS= ");
  scanf("%d",&sks);
  printf("masukkan nilai= ");
  scanf("%f",&bobot);
  while (bobot>0 && sks>0 && jumlahsks<=24) {
    jumlahsks=jumlahsks+sks;
    bs=bs+(bobot*sks);

    printf("masukkan sks= ");
    scanf("%d",&sks);
    printf("masukkan nilai= ");
    scanf("%f",&bobot);
  }
  IP=bs/jumlahsks;
  printf("IP anda adalah = %f", IP);
}
