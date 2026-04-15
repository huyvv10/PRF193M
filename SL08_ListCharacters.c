#include <stdio.h>

int main(){
	int i=0, n;
	char c;
	
	scanf("%c%d", &c, &n);
	
	while (i<n){
		printf("%c \t %d \t %o \t %x\n", c+i, c+i, c+i, c+i);
		i++;
	}
	return 0;
}
