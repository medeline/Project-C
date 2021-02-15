#include <stdio.h>

int main(){
  int counter=1, hasil=0, bil;
  scanf("%d", &bil);

  while(counter<=bil){
    if(counter%2==1){
      hasil=hasil+counter;
    }
    counter=counter+1;
  }
  printf("%d", hasil );
  return 0;
}
