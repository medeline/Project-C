#include <stdio.h>
#include <string.h>

int main(){
	char x[100];
	int p;
	int h=0;
	
	gets(x);
	p=strlen(x);
	
	for(int a=0;a<p;a++){
		if (x[a]=='a' || x[a]=='i' || x[a]=='u' || x[a]=='e' || x[a]=='o'){
			h++;
		}
	}
	
	printf("Banyaknya huruf vokal dalam nama tersebut adalah = %d", h);
	
	return 0;
}