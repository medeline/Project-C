#include <stdio.h>
#include <string.h>

void konversi(char a){
	if (a=='1'){
		printf("se");
	}
	else if (a=='2'){
		printf("dua ");
	}
	else if (a=='3'){
		printf("tiga ");
	}
	else if (a=='4'){
		printf("empat ");
	}
	else if (a=='5'){
		printf("lima ");
	}
	else if (a=='6'){
		printf("enam ");
	}
	else if (a=='7'){
		printf("tujuh ");
	}
	else if (a=='8'){
		printf("delapan ");
	}
	else if(a=='9'){
		printf("sembilan ");
	}
}

void puluhan (char a, char b){
	if (b=='1'){
		printf("sebelas");
	}
	else if (b=='2'){
		printf("dua belas");
	}
	else if (b=='3'){
		printf("tiga belas");
	}
	else if (b=='4'){
		printf("empat belas");
	}
	else if (b=='5'){
		printf("lima belas");
	}
	else if (b=='6'){
		printf("enam belas");
	}
	else if (b=='7'){
		printf("tujuh belas");
	}
	else if (b=='8'){
		printf("delapan belas");
	}
	else if (b=='9'){
		printf("sembilan belas");
	}
}

int main(){
	char a[4];
	int x=0;
	
	gets (a);
	
		if (a[0]!='0'){
			konversi (a[0]);
			printf("ribu ");
		}
		if (a[1]!='0'){
			konversi (a[1]);
			printf("ratus ");
		}
		if (a[2]=='0'){
			if (a[3]=='1'){
					printf ("satu ");
				}
				else {
					konversi (a[3]);
				}
		}
		if (a[2]=='1'){
			x++;
			puluhan (a[2],a[3]);
		}
		if (a[2]!='0' && a[2]!='1'){
			konversi (a[2]);
			printf ("puluh ");
			if (a[3]!='0'){
				
			}
		}
	
	return 0;
}