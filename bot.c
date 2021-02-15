#include <stdio.h>

int main(){
  int sks, j_sks;
  float bobot, ip=0, bs=0;

  scanf("%d", &sks);
  scanf("%f", &bobot);

  while(j_sks<=24 && sks>0 && bobot>0){
    j_sks=j_sks+sks;
    bs=bs+(bobot*sks);
    scanf("%d", &sks);
    scanf("%f", &bobot);
  }
  ip=bs/j_sks;
  printf("%f", ip);
  return 0;
}
