#include <stdio.h>

int main(){
	int n;
	printf("Input an integer number: ");
	scanf("%d", &n);
//	int rs;
//	rs = n>=18 ? 1 : 0;
//	
//	if (rs==1)
//		printf("She is 18+");
//	else
//		printf("She is under 18");
		
	if (n%2==0)
		printf("%d is an even number.",n);
	else
		printf("%d is an odd number.",n);
		
	return 0;
}
