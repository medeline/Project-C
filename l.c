#include <stdio.h>

int main(){

int b1,b2,b3,counter=0;

scanf("%d", &b1);
scanf("%d", &b2);
scanf("%d", &b3);

if(b1%2==1){
  counter=counter+1;
}

if(b2%2==1){
  counter=counter+1;
}

if(b3%2==1){
  counter=counter+1;
}

printf("%d", counter);

  return 0;
}
