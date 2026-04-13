#include <stdio.h>

int main(){
	char c;
	int n;
	float grade;
	double db;
	
	printf("Input a character: "); scanf("%c", &c);
	printf("Input an integer number: "); scanf("%d", &n);
	printf("Input student grade: "); scanf("%f", &grade);
	printf("Input an employee salary: "); scanf("%lf", &db);
	
	printf("Inputed character is: %c\n", c);
	printf("Inputed number n = %d\n", n);
	printf("Inputed student grade = %.2f\n", grade);
	printf("Inputed employee salary = %.2lf\n", db);
	
	return 0;
}
