#include <stdio.h>

int main(){
 int bil, min=0, ganjil=0;

 scanf("%d", &bil);
 min=bil;

 while(bil>0){
   if(bil%2==1){
     ganjil=ganjil+bil;
   }
   if(bil<min){
     min=bil;
   }
    scanf("%d", &bil);
 }

 printf("%d", ganjil);
  printf("\n%d", min);
return 0;
}
