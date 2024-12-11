#include <stdio.h>

int main () {
	int a;
	printf("nhap so bat ki = ");
	scanf("%d", &a);

		if (a>0){
		printf ("%d la so duong", a);
		}
		else if (a<0) {
		printf ("%d la so am", a);
		}
		else {
		printf ("%d la so 0 khong la am hay duong!", a);
		}
		return 0;
		
	}
