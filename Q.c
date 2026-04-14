#include <stdio.h>
#define PI 3.14159

int main(){
	const float pi = 3.14159;
	float r;
	scanf("%f", &r);
	
	printf("OUTPUT\n");
	
	printf("%.2f\n", 2*pi*r);
	printf("%.2f", PI*r*r);
	return 0;
}
