#include <stdio.h>

int main(){
int bil;

scanf("%d", &bil);

if(bil>0){
  printf("Bilangan positif");
  }
  if(bil==0){
    printf("Bilangan netral");
  }

  if(bil<0){
    printf("Bilangan negatif");
  }
  return 0;
}
