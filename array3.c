#include <stdio.h>
#include <string.h>

int main(){
	char x[100];
	int p;
	int h=1;
	
	gets(x);
	strlwr(x);
	p=strlen(x);
	
	for(int a=0;a<p;a++){
		if ((x[a]=='a' || x[a]=='b' || x[a]=='c' || x[a]=='d' || x[a]=='e' || x[a]=='f' || x[a]=='g' || x[a]=='h' || x[a]=='i' || x[a]=='j' || x[a]=='k' 
		 || x[a]=='l' || x[a]=='m' || x[a]=='n' || x[a]=='o' || x[a]=='p' || x[a]=='q' || x[a]=='r' || x[a]=='s' || x[a]=='t' || x[a]=='u' || x[a]=='v' 
		 || x[a]=='w' || x[a]=='x' || x[a]=='y' || x[a]=='z' || x[a]==' ') && h != 0){
			h=1;
		}
		else h=0;
	}
	if (h==1){
		printf("Valid");
	}
	else printf("Tidak Valid");
	
	return 0;
}