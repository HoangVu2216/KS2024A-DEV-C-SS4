#include <stdio.h>

int main() {
    int cu, moi, so_dien;
    long tien;

    printf("Nhap chi so cu: ");
    scanf("%d", &cu);
    printf("Nhap chi so moi: ");
    scanf("%d", &moi);

    so_dien = moi - cu;
    tien = (so_dien <= 50) ? so_dien * 10000 :
           (so_dien <= 100) ? 50 * 10000 + (so_dien - 50) * 15000 :
           (so_dien <= 150) ? 50 * 10000 + 50 * 15000 + (so_dien - 100) * 20000 :
           (so_dien <= 200) ? 50 * 10000 + 50 * 15000 + 50 * 20000 + (so_dien - 150) * 25000 :
                              50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (so_dien - 200) * 30000;

    printf("So dien: %d kWh\n", so_dien);
    printf("Tien dien: %ld VND\n", tien);
    return 0;
}

