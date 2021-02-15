#include <stdio.h>

int main(){
int bil, counter, hasil;

scanf("%d", &bil);
counter=1;
hasil=0;

while(counter<bil){
  hasil=hasil+counter;
  counter=counter+1;
}

printf("%d", hasil);
  return 0;
}
