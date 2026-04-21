#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char name[]="vU VAn hUy";
	strlwr(name);
	puts(name);
	int i, n;
	n=strlen(name);
	for (i=0; i<n; i++)
		if (i==0 || name[i-1]==' ')
			name[i]=toupper(name[i]);
	puts(name);		
	return 0;
}
