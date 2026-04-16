#include <stdio.h>

int main(){
	int n = 5, m = 7;
	int *pm = &m; 

	int *pI;
	pI = &n;
	printf("Gia tri cua n = %d", n);
	printf("\nDia chi cua n = %x", &n);
	printf("\nGia tri cua con tro pI = %d", *pI);
	printf("\nDia chi ma con tro pI tro den = %x", pI);
	printf("\nDia chi cua ban than con tro pI = %x\n", &pI);
	
	*pI = 10;
	printf("\nGia tri cua n = %d", n);
	printf("\nDia chi cua n = %x", &n);
	printf("\nGia tri cua con tro pI = %d", *pI);
	printf("\nDia chi ma con tro pI tro den = %x", pI);
	printf("\nDia chi cua ban than con tro pI = %x\n", &pI);
	
	pI=&m;
	printf("\nGia tri cua n = %d", n);
	printf("\nDia chi cua n = %x", &n);
	printf("\nGia tri cua m = %d", m);
	printf("\nDia chi cua m = %x", &m);
	printf("\nGia tri cua con tro pI = %d", *pI);
	printf("\nDia chi ma con tro pI tro den = %x", pI);
	printf("\nDia chi cua ban than con tro pI = %x\n", &pI);
			
	return 0;
}
