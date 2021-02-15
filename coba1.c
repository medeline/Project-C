#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char input[30];
	int max;

	gets(input);
	max=strlen(input);
	for(int i=0;i<max;i++){
		if(input[i]>='a' && input[i]<'z'){
			input[i]=input[i]+1;
		}
		else if(input[i]=='z'){
			input[i]='a';
		}
		if(input[i]>='A' && input[i]<'Z'){
			input[i]=input[i]+1;
		}
		else if(input[i]=='Z'){
			input[i]='A';}
			if(input[i]==' '){
				input[i]='?';
			}

	}

	printf("%s",input);
	return 0;
}
