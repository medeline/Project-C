#include <stdio.h>

int main(){
int bil, counter=1, hasil=0;

scanf("%d", &bil);

while(counter<=bil){
  if(bil%counter==0){
  printf("%d", counter);
  }
  counter=counter+1;
}
  return 0;
}
