#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i;
	for (i=0; i<=n; i++)
		printf("%d ", i);
	printf("\n");	
	for (i=1; i<=n; i+=2)
		printf("%d ", i);		
	printf("\n");	
	for (i=0; i<=n; i+=2)
		printf("%d ", i);	
	return 0;
}
