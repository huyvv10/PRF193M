#include <stdio.h>
#define MAX 10

void input2DArray(int a[][MAX], int r, int c){
	int i, j;
	for (i=0; i<r; i++)
		for (j=0; j<c; j++){
			printf("a[%d][%d] = ",i,j); scanf("%d", &a[i][j]);
		}
}

void display2DArray(int a[][MAX], int r, int c){
	int i, j;
	for (i=0; i<r; i++){
		for (j=0; j<c; j++)
			printf("%d ", a[i][j]);
		printf("\n");		
	}
}

void displayMainDiagonal(int a[][MAX], int r, int c){
	int i, d;
	d = r>c ? c : r;
	for (i=0; i<d; i++)
		printf("%d ", a[i][i]);
}

void displaySubDiagonal(int a[][MAX], int r, int c){
	int i, d;
	d = r>c ? c : r;
	for (i=0; i<d; i++)
		printf("%d ", a[i][d-i-1]);	
}

//Display total value of each row
void calTotalByRow(int a[][MAX], int r, int c){
	int i, j, S;
	for (i=0; i<r; i++){
		S=0;							//Reset S = 0
		for (j=0; j<c; j++)	S += a[i][j];
		printf("%d ", S);
	}
}

//Display total value of each column
void calTotalByColumn(int a[][MAX], int r, int c){
	int i, j, S;
	for (i=0; i<c; i++){
		S=0; 							//Reset S = 0
		for (j=0; j<r; j++)	S += a[j][i];
		printf("%d ", S);
	}
}
int main(){
	int m, n;
	int arr[MAX][MAX];
	scanf("%d%d", &m, &n);
	input2DArray(arr, m, n);
	display2DArray(arr, m, n);
	printf("\nMain diagonal: ");
	displayMainDiagonal(arr, m, n);
	printf("\nSub diagonal: ");
	displaySubDiagonal(arr, m, n);
	printf("\nSum by rows: ");
	calTotalByRow(arr, m, n);
	printf("\nSum by columns: ");
	calTotalByColumn(arr, m, n);
	return 0;
}
