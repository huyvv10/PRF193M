#include <stdio.h>

int main(){
	int m,n;
//	printf("Input m = "); scanf("%d", &m);
//	printf("Input n = "); scanf("%d", &n);
	scanf("%d%d", &m, &n);
	printf("OUTPUT\n");
	printf("%d + %d = %lld\n", m, n, (long long)m+n);
	printf("%d - %d = %lld\n", m, n, (long long)m-n);
	printf("%d x %d = %lld\n", m, n, (long long)m*n);
	printf("%d / %d = %.2lf\n", m, n, (double)m/n);
	printf("%d", 3%2);
	return 0;
}
