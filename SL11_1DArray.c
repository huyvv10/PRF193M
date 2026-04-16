#include <stdio.h>

int main(){
	int n = 3, i;
	int arr[n];
	arr[0]=5; 
	arr[1]=9; 
	arr[2]=4; 
	
	for (i=0; i<n; i++)
		printf("%d ", arr[i]);
	
	printf("\n");
	int brr[]={5,8,9,4,5,6,2};
	for (i=0; i<7; i++)
		printf("%d ", brr[i]);	
	return 0;
}
