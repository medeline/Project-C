#include <stdio.h>
#include <string.h>

int main(){
	char a[100],b[100];
	int p;
	int h=1;
	
	gets(a);
	strcpy(b,a);
	strrev(b);
	p=strlen(a);
	
		for(int x=0;x<p;x++){
			if (a[x]==b[x] && h!=0){
				h=1;
			}
			else h=0;
		}
	
	if (h==1){
		printf("PALINDROM");
	}
	else printf("BUKAN PALINDROM");
	
	return 0;
}