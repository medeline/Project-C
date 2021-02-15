#include <stdio.h>
#include <conio.h>
#include <string.h>

int chartoint(char c){
	if(c=='0'){
		return 0;
	}
	else if(c=='1'){
		return 1;
	}
	else if(c=='2'){
		return 2;
	}
	else if(c=='3'){
		return 3;
	}
	else if(c=='4'){
		return 4;
	}
	else if(c=='5'){
		return 5;
	}
	else if(c=='6'){
		return 6;
	}
	else if(c=='6'){
		return 6;
	}
	else if(c=='7'){
		return 7;
	}
	else if(c=='8'){
		return 8;
	}
	else if(c=='9'){
		return 9;
	}	
}
int main(){
	char input[30];
	int max;
	int i=0;
	gets(input);
	max=strlen(input);
	int output=0;	
	while(i<max){
		output=output+ chartoint(input[i]);
		i++;
	}
	
	printf("%d", output);
	return 0;
}