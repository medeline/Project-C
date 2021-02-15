#include <stdio.h>

int main(){
int bil, counter=1, hasil=1;

scanf("%d", &bil);

while(counter<=bil){
  hasil=hasil*counter;
  counter=counter+1;
}

printf("%d", hasil);
  return 0;
}
