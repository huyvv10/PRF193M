#include <stdio.h>

int main(){
	char c1 = 'H';
	char c2 = 'U';
	char c3 = 'Y';
	
	printf("%c%c%c", c1, c2, c3);
	int m = 5;
	printf("\nm = %d", m);
	float mark = 8.5F;
	printf("\nYour grade is: %f", mark);
	printf("\nYour grade is: %.2f", mark);
	double score = 9.5;
	
	printf("\nYour score is: %.2lf", score);
	
	return 0;
}
