#include <stdio.h>
int main(){
int bil, counter=1;

scanf("%d", &bil);
while(counter<bil){
  if(counter%2==1){
    printf("%d", counter);
  }
  counter=counter+1;
}
return 0;
}
