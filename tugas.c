#include <stdio.h>

int main(){
  int uts, uas, tugas, total;

  scanf("%d", &uts);
  scanf("%d", &uas);
  scanf("%d", &tugas);

  total=(uts+uas+tugas)/3;

  printf("%d", total);

  if(total>56){
    printf("lulus");
  }
  else{
    printf("tidak lulus");
  }

return 0;
}
