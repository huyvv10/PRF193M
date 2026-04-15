#include <stdio.h>

int main(){
	int n, i, count=0, S=0;
	scanf("%d", &n);
	
	printf("OUTPUT\n");
	for (i=1;i<=n/2; i++)
		if (n%i==0){
			printf("%d ", i);
			count++;
			S+=i;
		}
	printf("%d\n", n);
	printf("%d\n", S+n);
	printf("%d", count+1);
			
	return 0;
}
