#include <stdio.h>

int main(){
int bil, hasil=0;

scanf("%d", &bil);

while(bil>0){
  hasil=hasil+bil;
  scanf("%d", &bil);
}

printf("%d", hasil);
  return 0;
}
