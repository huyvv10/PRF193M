#include <stdio.h>
#include <ctype.h>

int main() {
	char gpa;
	printf("Input your grade (in letter): ");
	scanf("%c", &gpa);

	gpa = toupper(gpa);
	switch(gpa) {
		case 'A':
			printf("Excellence.");
			break;
		case 'B':
			printf("Good.");
			break;
		case 'C':
			printf("Well.");
			break;
		case 'D':
			printf("Fair.");
			break;
		case 'F':
			printf("poor.");
			break;
		default:
			printf("Invalid grade");
			break;
	}
	return 0;
}
