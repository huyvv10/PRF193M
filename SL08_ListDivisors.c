#include <stdio.h>

int main(){
	int i=1, m,n, count=0;
	
	scanf("%d%d", &n, &m);
	while (i<=n/2 && count!=m){
		if (n%i==0) {
			printf("%d ", i);
			count++;
		}
		i++;
	}
	if (count+1==m)
		printf("%d", n);
	else if (count+1<m){
		printf("%d", n);		
		printf("\nNot enough.");
	}
	return 0;
}
