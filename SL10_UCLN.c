#include <stdio.h>
int UCLN(int a, int b){
	while (a!=b){
		if (a>b)
			a=a-b;
		else 
			b=b-a;	
	}
	return a;
}
int BSCNN(int a, int b){
	int sm,big;
	sm = a>b ? b : a;
	big =a>b ? a : b;
	return sm*(big/UCLN(a,b));	 	
}
int main(){
	int a, b;
	scanf("%d%d",&a, &b);
	printf("USCLN cua %d va %d la %d", a, b, UCLN(a,b));
	printf("\nBSCNN cua %d va %d la %d", a, b, BSCNN(a,b));
	return 0;
}
