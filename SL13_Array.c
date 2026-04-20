#include <stdio.h>
void display(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
}
//Return the number appearances of x in the array.
int countAppearance(int a[], int n, int x){
	int i, count=0;
	for (i=0; i<n; i++)
		if (a[i]==x) count++;
	return count;	
}
int main(){
	int n=10;
	int arr[]={7,9,2,9,6,7,3,5,8,9};
	display(arr,n);
	int x, rs;
	printf("\nInput number to count: "); scanf("%d", &x);
	rs = countAppearance(arr, n, x);
	if (rs == 0) printf("Find not found %d in the array", x);
	else printf("The number appearance of %d in the array is %d", x, rs);
	return 0;
}
