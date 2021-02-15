#include <stdio.h>
int main(){
int jumlahsks=0, sks;
float bobot, bs=0, ip=0;

scanf("%d", &sks);
scanf("%f", &bobot);

while(jumlahsks<=24 && sks>0 && bobot>0){
jumlahsks=jumlahsks+sks;
bs=bs+(bobot*sks);
scanf("%d", &sks);
scanf("%f", &bobot);
}

ip=bs/jumlahsks;
printf("%f", ip);
  return 0;
}
