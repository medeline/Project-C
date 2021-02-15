#include <stdio.h>

int main(){
 float L,K,r,pi;
 int mode;
 pi=3.14;

 printf("Masukkan jari-jari= ");
 scanf("%f", &r);
 printf("Masukkan mode= ");
 scanf("%d", &mode);

 if(mode==1){
   K=2*pi*r;
   printf("Keliling= %f", K);
 }
 else if(mode==2){
     L=pi*r*r;
      printf("Luas= %f", L);
 }

 else if(mode==3){
   K=2*pi*r;
   printf("Keliling= %f\n", K);
  L=pi*r*r;
  printf("Luas= %f\n", L);
 }

 else{
   printf("Mode Tidak Dikenali");
 }

return 0;
}
