#include <stdio.h>
void display(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
	printf("\n");	
}

void selectionSortAsc(int a[], int n){
	int i,j, minIdx;
	for (i=0; i<n-1; i++){
		minIdx=i;
		for (j=i+1; j<n; j++)
			if (a[j]<a[minIdx]) minIdx=j;		//Swap < to > for descending order
		if (i!=minIdx){
			int tg=a[i]; a[i]=a[minIdx]; a[minIdx]=tg;
		}	
	}
}

void selectionSortDesc(int a[], int n){
	int i,j, minIdx;
	for (i=0; i<n-1; i++){
		minIdx=i;
		for (j=i+1; j<n; j++)
			if (a[j]>a[minIdx]) minIdx=j;		//Swap < to > for ascending order
		if (i!=minIdx){
			int tg=a[i]; a[i]=a[minIdx]; a[minIdx]=tg;
		}	
	}
}

void bubleSortAsc(int a[], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j] < a[j-1]){					//Swap < to > for descending order
				int tg = a[j]; a[j] = a[j-1]; a[j-1] = tg;
			}
}

void bubleSortDesc(int a[], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j] > a[j-1]){					//Swap < to > for ascending order
				int tg = a[j]; a[j] = a[j-1]; a[j-1] = tg;
			}
}

int getMax(int a[], int n){
	int i, max=a[0];
	for (i=1; i<n; i++)
		if (a[i]>max) max = a[i];
	return max;	
}

int getMin(int a[], int n){
	int i, min=a[0];
	for (i=1; i<n; i++)
		if (a[i]<min) min = a[i];
	return min;	
}
//Return the position the-k of maximum value.
//Return -1 if does not existing the-k
int findPosMaxTheK(int a[], int n, int k){
	int i, count=0, pos=-1, max;
	if (k>=n) return -1;		//Find not found.
	max=getMax(a, n);
	for (i=0; i<n; i++)
		if (a[i]==max) {
			count++;
			if (count==k) {
				pos=i; break;
			}			
		}
	if (count!=k) return -1;	
	return pos;	
}

int findPosValueTheK(int a[], int n, int value, int k){
	int i, count=0, pos=-1;
	if (k>=n) return -1;		//Find not found.
	for (i=0; i<n; i++)
		if (a[i]==value) {
			count++;
			if (count==k) {
				pos=i; break;
			}			
		}
	if (count!=k) return -1;	
	return pos;	
}

void sortInRangeAsc(int a[], int n, int pos1, int pos2){
	int i,j;
	for (i=pos1; i<pos2; i++)
		for (j=pos2; j>i; j--)
			if (a[j] < a[j-1]){
				int tg = a[j]; a[j]=a[j-1]; a[j-1]=tg;
			}
}

int getTheValueOfSecondMaximum(int a[], int n){
	int i, se_Max=-999999999, max;
	max=getMax(a,n);
	for (i=0; i<n; i++)
		if (a[i]>se_Max && a[i]<max) se_Max=a[i];
	return se_Max;
}
int main(){
	int n=10;
	int arr[]={7,9,2,9,6,7,3,2,8,9};	
	display(arr, n);
//	selectionSortAsc(arr,n);
//	display(arr,n);
//	selectionSortDesc(arr,n);
//	bubleSortAsc(arr,n);
//	display(arr,n);
//	bubleSortDesc(arr,n);
	int pos, k, pos_Max, pos_Min;
	printf("Input the-k: "); scanf("%d", &k);
	pos=findPosMaxTheK(arr, n, k);
	if (pos!=-1)
		printf("The position of maximum the-%d is: %d", k, pos);
	else
		printf("Find not found the maximum the-%d", k);	
		
	pos_Max=findPosValueTheK(arr, n, getMax(arr, n), k);
	pos_Min=findPosValueTheK(arr, n, getMin(arr, n), k);
	printf("\npos = %d", pos_Max);	
	printf("\npos min = %d", pos_Min);	
	printf("\n");
	sortInRangeAsc(arr, n, pos_Max, pos_Min);
	display(arr,n);
	printf("The value of the second maximum: %d", getTheValueOfSecondMaximum(arr,n));
}
