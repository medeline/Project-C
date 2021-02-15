#include <Stdio.h>

void main(){
  int bil,jumlah,min;
  jumlah=0;

  printf("Masukkan BIlangan= ");
  scanf("%d", &bil);
  min=bil;

  while(bil>0){
    if(bil%2==1){
      jumlah=jumlah+bil;
    }
    if(bil<min && bil>=0){
      min=bil;
    }
    printf("Masukkan BIlangan= ");
    scanf("%d", &bil);
  }
  printf("\nJumlah Bilangan Ganjil= %d", jumlah);
  printf("\nBilangan Terkecil= %d", min);
}
