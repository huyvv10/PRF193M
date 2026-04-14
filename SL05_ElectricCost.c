#include <stdio.h>

int main(){
	int n;
	printf("Input number of electric consumed: ");
	scanf("%d", &n);
	float rs;
	if (n<=50)
		rs=n*1984;
	else if (n<=100)	
		rs= 50*1984 + (n-50)*2050;
	else if (n<=200)	
		rs= 50*1984 + 50*2050 + (n-100)*2380;
	else if (n<=300)	
		rs= 50*1984 + 50*2050 + 100*2380 + (n-200)*2998;
	else if (n<=400)	
		rs= 50*1984 + 50*2050 + 100*2380 + 100*2998 + (n-300)*3350;
	else
		rs= 50*1984 + 50*2050 + 100*2380 + 100*2998 + 100*3350 + (n-400)*3460;
	
	printf("Total cost: %.2f vnd", rs*1.1);
	return 0;
}
