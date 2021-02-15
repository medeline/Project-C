#include <stdio.h>
#include <conio.h>

void main(){
  int bil,counter=1,jumlah=0;

  printf("Masukkan Bilangan= ");
  scanf("%d", &bil);

    while(bil>=counter)
    {
        if(bil%counter==0){
          jumlah=jumlah+1;
        }
      counter=counter+1;
    }
if(jumlah==2){
  printf("Bilangan Prima");
}
else{
  printf("Bukan Bilangan Prima");
}
}
