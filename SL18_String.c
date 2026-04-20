#include <stdio.h>
#include <string.h>

int main(){
	char name[]="Xin chao cac ban";
	
	printf("%s\n", name);
	
	puts(name);
	printf("\n");
	int i;
	for (i=0; i<strlen(name); i++)
		printf("%c", name[i]);
	return 0;
}
