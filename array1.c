#include <stdio.h>
#include <string.h>

int main(){
	char x[100];
	int p;
	int h=0;
	
	gets(x);
	p=strlen(x);
	
	for(int a=0;a<p;a++){
		if (x[a]=='a' || x[a]=='A'){
			h++;
		}
	}
	
	printf("Banyaknya huruf 'a' dalam nama tersebut adalah = %d", h);
	return 0;
}