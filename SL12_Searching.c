#include <stdio.h>
int getMax(int *a, int n){
	int i, max=a[0];
	for (i=1; i<n; i++)
		if (a[i]>max) max = a[i];
	return max;	
}
int getMin(int *a, int n){
	int i, min=a[0];
	for (i=1; i<n; i++)
		if (a[i]<min) min = a[i];
	return min;		
}
//Return the position first found of x in the array from the left.
//Return -1 in case find not found.
int findTheFirstPosFromTheLeft(int a[], int n, int x){
	int i, pos=-1;
	for (i=0; i<n; i++)
		if (a[i]==x){
			pos=i; break;
		}
	return pos;	
}
int main(){
	int n=10;
	int arr[]={5,6,9,4,8,2,5,9,3,1};
	
	printf("The maximum values: %d", getMax(arr, n));	
	printf("\nThe minimum values: %d", getMin(arr, n));	
	int x, pos;
	printf("\nInput searching number: "); scanf("%d", &x);
	pos=findTheFirstPosFromTheLeft(arr,n,x);
	if (pos>=0)
		printf("The position first found %d is %d", x, pos);
	else
		printf("Find not found %d in the array", x);	
	return 0;
}
