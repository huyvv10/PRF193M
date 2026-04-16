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

//Return 1 if n is a prime number. Return 0 otherwise.
int isPrime(int n){
	int i, rs=1;
	if (n<2) rs=0;
	else {
		for (i=2; i*i<=n; i++)
			if (n%i==0){
				rs=0;
				break;
			}
	}
	return rs;
}

void displayPrime(int *a, int n){
	int i, count=0;
	for (i=0; i<n; i++)
		if (isPrime(a[i])==1){
			printf("%d ", a[i]);
			count++;
		}
	printf("\n%d", count);	
}

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	
	inputArray(arr,n);
	displayArray(arr,n);
	printf("\n");
	displayPrime(arr,n);
	return 0;
}
