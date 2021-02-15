#include <stdio.h>
#include <string.h>

int main(){
	char x[100];
	int p;
	int h=1;
	
	gets(x);
	p=strlen(x)-1;
	
	for(int a=0;a<p;a++){
		if (x[a]==x[p] && h!=0){
			h=1;
		}
		else h=0;
		p--;
	}
	
	if (h==1){
		printf("PALINDROM");
	}
	else printf("BUKAN PALINDROM");
	
	return 0;
}