#include <stdio.h>

int main () {
	int a;
	printf("nhap so bat ki = ");
	scanf("%d", &a);

		if (a%3==0 && a%5==0) {
		printf ("%d chia het cho ca 3 va 5", a);
		}
		else if (a%3==0) {
		printf ("%d chia het cho 3 va khong chia het cho 5", a);
		}
		else if (a%5==0) {
		printf ("%d chia het cho 5 va khong chia het cho 3", a);
		}
		return 0;
	}
