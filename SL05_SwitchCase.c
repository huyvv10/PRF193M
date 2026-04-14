#include <stdio.h>

int main(){
	int n;
	printf("Nhap giai thuong: "); scanf("%d", &n);
	
	switch (n){
		case 1:
			printf("Ban dat giai nhat: 1000000 vnd");
			break;
		case 2:
			printf("Ban dat giai nhi: 500000 vnd");
			break;
		case 3:
			printf("Ban dat giai ba: 100000 vnd");
			break;
		case 4:
			printf("Ban dat giai khuyen khich: 10000 vnd");
			break;
		default:
			printf("Chuc ban may man lan sau.");				
	}
	return 0;
}
