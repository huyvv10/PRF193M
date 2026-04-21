#include <stdio.h>
#include <string.h>

int main(){
	char str[31];
	char str2[30]=" Viet Nam";
	
	puts(str2);
//	str = "FPT University";
	strcpy(str, "FPT University");	//Assign in string 
	puts(str);
	char str3[30];
	strcpy(str3,str);
	strcat(str3,str2);
	puts(str3);
	printf("\n----\n");
	puts(str);
	puts(str3);
	return 0;
}
