#include <stdio.h>

int main(){
	int age;
	printf("Input your age: "); scanf("%d", &age);
	if (age>=18)
		printf("You are adult.");
	else
		printf("You are not adult.");	
	return 0;
}
