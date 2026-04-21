#include <stdio.h>
#include <string.h>
#define MAX 31
void display(char S[][MAX], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%s\n", S[i]);
}

void inputArray(char S[][MAX], int n){
	int i;
	for (i=0; i<n; i++){
		printf("a[%d] = ",i); scanf("%[^\n]", &S[i]); getchar();
	}
}

void searching(char S[][MAX], int n, char *keyword){
	int i;
	for (i=0; i<n; i++){
		char tmp[MAX];
		strcpy(tmp, S[i]);
		if (strstr(strupr(tmp), strupr(keyword))!=NULL)
			puts(strupr(tmp));		
	}
}
//Sort the list in ascending order using Bubble sort algorithm
void sortListAsc(char S[][MAX], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (strcmp(S[j],S[j-1])<0){
				char tmp[MAX];
				strcpy(tmp, S[j]); strcpy(S[j], S[j-1]);
				strcpy(S[j-1], tmp);
			}
}
//Return the length of the element with longest length.
int getMaxLength(char S[][MAX], int n){
	int i, max=strlen(S[0]);
	for (i=1; i<n; i++)
		if (strlen(S[i])>max) max = strlen(S[i]);
	return max;	
}

void displayTheLongestName(char S[][MAX], int n){
	int i, maxLen = getMaxLength(S,n);
	for (i=0; i<n; i++)
		if (strlen(S[i])==maxLen)
			puts(S[i]);
}
int main(){
	int n;
	char str[5][MAX]={"Dao","Le","Tao","Man","Nhan"};
	display(str, 5);
	
	printf("\nInput number of elements: ");
	scanf("%d", &n);
	getchar();			//clear buffer
	char name[n][MAX];
	inputArray(name, n);
	printf("\nInputed list\n");
	display(name, n);
	printf("\nInput searching name: ");
	char kw[MAX];
	gets(kw);
	searching(name, n, kw);
	
	printf("\nSort the list\n");
	sortListAsc(name, n);
	display(name, n);
	
	printf("\nThe longest name\n");
	displayTheLongestName(name, n);
			
	return 0;
}
