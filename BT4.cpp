#include <stdio.h>

int main () {
	int a;
	printf("nhap thang bat ki = ");
	scanf("%d", &a);

		if (a==1||a==3||a==5||a==7||a==8||a==10||a==12) {
		printf ("%d la thang co 31 ngay", a);
		}
		else if (a==4||a==6||a==9||a==11) {
		printf ("%d la thang co 30 ngay", a);
		}
		else {
		printf ("%d la thang co 28 ngay vao nam thuong va co 29 ngay vao nam nhuan", a);
		}
		return 0;
	}
