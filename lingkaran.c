#include <stdio.h>

int main(){
  float mode, phi=3.14, r, luas=0, keliling=0;

  scanf("%f", &r);
  scanf("%f", &mode);

  if(mode==1){
      luas=phi*r*r;
      printf("%f", luas);
  }

  if(mode==2){
      keliling=2*phi*r;
      printf("%f", keliling);
  }

  return 0;
}
