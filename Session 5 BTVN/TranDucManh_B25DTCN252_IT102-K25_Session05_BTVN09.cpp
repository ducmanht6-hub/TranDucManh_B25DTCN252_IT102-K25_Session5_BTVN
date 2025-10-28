#include <stdio.h>

int main() {
    float heSoLuong;
    int ngayCong, chucVu;
    float phuCap, thuong = 0, luong;
    printf("Nhap he so luong: ");
    scanf("%f", &heSoLuong);
    printf("Nhap so ngay cong: ");
    scanf("%d", &ngayCong);
    printf("Nhap chuc vu (1: Nhan vien, 2: To truong, 3: Quan ly): ");
    scanf("%d", &chucVu);
    switch(chucVu) {
        case 1: phuCap = 500000; break;
        case 2: phuCap = 1000000; break;
        case 3: phuCap = 2000000; break;
        default:
            printf("Chuc vu khong hop le!\n");
            return 0;
    }
    if (ngayCong > 26) {
        thuong = (ngayCong - 26) * 200000;
    }
    luong = ngayCong * 160000 * heSoLuong + phuCap + thuong;
    printf("\n--- Ket qua ---\n");
    printf("Phu cap: %.0f VND\n", phuCap);
    printf("Thuong: %.0f VND\n", thuong);
    printf("Luong thang: %.0f VND\n", luong);
    return 0;
}


