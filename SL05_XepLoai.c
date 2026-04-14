#include <stdio.h>

int main(){
	float gpa;
	printf("Input your gpa: "); scanf("%f", &gpa);
	
	if (gpa>=9)
		printf("Excellence.");
	else if (gpa>=8)
		printf("Good.");
	else if (gpa>=7)
		printf("Well.");
	else if (gpa>=5)
		printf("Fair.");
	else
		printf("Poor");
		
	return 0;
}
