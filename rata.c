#include <stdio.h>

int main(){
  float uts,uas,tugas,rata;

  printf("Masukkan nilai UTS= ");
  scanf("%f", &uts);
  printf("Masukkan nilai Tugas= ");
  scanf("%f", &tugas);
  printf("Masukkan nilai UAS= ");
  scanf("%f", &uas);

  rata=(uts+uas+tugas)/3;
  printf("rata-rata= %f\n", rata);

  if(rata<56){
    printf("Gagal");
  }
  else{
    printf("Lulus");
  }

  return 0;
}
