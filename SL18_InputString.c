#include <stdio.h>

int main(){
	char S[31], S1[31];
	printf("Input your string: ");
	scanf("%[^\n]", &S);
	
	printf("%s\n", S);
	
	getchar(); 						//Clear buffer
	printf("Input another string: ");
	scanf("%[abcd]", &S1);
	printf("%s\n", S1);
	getchar(); 						//Clear buffer
	fflush(stdin);					//clear buffer
	printf("Input Phone number: ");
	scanf("%10[0-9]", &S1);
	printf("%s\n", S1);
	
	fflush(stdin);					//clear buffer
	printf("\nInput a string (gets): ");
	gets(S1);
	puts(S1);
	printf("\n");
	printf("%-5s %-20s %-10s %10s\n", "STT", "Ho ten", "Ngay sinh", "Dia chi");
	printf("%-5d %-20s %-10s %10s\n", 1, "Vu Van Huy", "10/10/2020", "Ha Noi");
	printf("%-5d %-20s %-10s %10s\n", 2, "Nguyen Tran Nam", "15/10/2020", "Ha Noi");
	
	return 0;
}
