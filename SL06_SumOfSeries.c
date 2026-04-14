#include <stdio.h>

int main(){
	int i,n;
	scanf("%d", &n);
	int S=0;
	for (i=1; i<=n; i++){
		if (i==n)
			printf("%d ", i);
		else
			printf("%d + ", i);
		S+=i; 		//S = S + i;
	}
	printf("= %d", S);	
	return 0;
}
