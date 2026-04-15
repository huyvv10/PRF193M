#include <stdio.h>

int main(){
	int i, n;
	scanf("%d", &n);
	
	i=0;
	while (i<n){
		printf("%d ", i);
		i++;
	}
	printf("\n");
	i=0;
	do{
		printf("%d ", i);
		i++;
	}while (i<n);
	
	printf("\n");
	i=n-1;
	do{
		printf("%d ", i);
		i--;
	}while (i>=0);	
	
	return 0;
}
