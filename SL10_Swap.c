#include <stdio.h>
void swap(int a, int b){
	int tg;
	printf("\nBefore swap in swap func: a = %d, b = %d", a, b);	
	tg=a; a=b; b=tg;
	printf("\nAfter swap in swap func: a = %d, b = %d", a, b);	
}

void swap2(int *a, int *b){
	int tg;
	printf("\nBefore swap in swap2 func: a = %d, b = %d", *a, *b);	
	tg=*a; *a=*b; *b=tg;
	printf("\nAfter swap in swap2 func: a = %d, b = %d", *a, *b);	
}
int main(){
	int a=5, b=7;
	printf("Before swap in main: a = %d, b = %d\n", a,b);
	swap(a, b);
	printf("\nAfter swap in main: a = %d, b = %d\n", a,b);
	printf("\n");
	swap2(&a, &b);
	printf("\nAfter swap2 in main: a = %d, b = %d\n", a,b);
	return 0;
}
