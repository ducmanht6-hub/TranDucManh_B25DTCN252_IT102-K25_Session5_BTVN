#include <stdio.h>

int main() {
    float thuNhap, thueSuat, thuePhaiDong;

    printf("Nhap so tien thu nhap (trieu dong): ");
    scanf("%f", &thuNhap);

    if (thuNhap <= 5)
        thueSuat = 5;
    else if (thuNhap <= 10)
        thueSuat = 10;
    else
        thueSuat = 15;

    thuePhaiDong = thuNhap * (thueSuat / 100);

    printf("Thue thu nhap phai dong : %.2f\n", thuePhaiDong);

    return 0;
}

