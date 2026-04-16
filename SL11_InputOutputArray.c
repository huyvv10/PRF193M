#include <stdio.h>
void inputArray(int a[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void displayArray(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ",a[i]);
}
//Display the array in reverse order
void reverseArray(int a[], int n){
	int i;
	for (i=n-1; i>=0; i--)
		printf("%d ",a[i]);	
}

void displayOddEven(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		if (a[i]%2==0)
			printf("%d ",a[i]);
	printf("\n");		
	for (i=0; i<n; i++)
		if (a[i]%2==1)
			printf("%d ",a[i]);
}
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	int brr[]={5,8,9,4,5,6,2};
	
	inputArray(arr,n);
	displayArray(arr,n);
	printf("\n");
	displayArray(brr,7);
	printf("\n");
	reverseArray(brr,7);
	printf("\n");
	displayOddEven(brr,7);
	return 0;
}
