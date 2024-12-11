#include <stdio.h>

int main () {
	int a;
	printf("nhap so bat ki = ");
	scanf("%d", &a);

		if (a>0 && a % 2 == 0 ) {
		printf ("%d la so chan", a);
		}
		else if (a % 2 != 0 ) {
		printf ("%d la so le", a);
		}
		else {
		printf ("so ban nhap la so 0 khong la chan hay le!");
		}
		return 0;
	}
