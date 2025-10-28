#include <stdio.h>

int main() {
    int kWh, loai;
    double tien = 0.0, phuPhi = 0.0, tong = 0.0;
    const double G1 = 1500.0, G2 = 2000.0, G3 = 2500.0, G4 = 3000.0;

    printf("Nhap so kWh tieu thu: ");
    scanf("%d", &kWh);

    printf("Nhap loai ho tieu dung (1-Ho gia dinh, 2-Ho kinh doanh, 3-Ho san xuat): ");
    scanf("%d", &loai);

    // Ki?m tra h?p l?
    if (kWh < 0) {
        printf("Loi: So kWh khong hop le.\n");
        return 0;
    }
    if (loai < 1 || loai > 3) {
        printf("Loi: Loai ho khong hop le.\n");
        return 0;
    }

    int rem = kWh;   // ph?n kWh còn l?i sau m?i b?c
    int amt;         // lu?ng kWh dùng ? m?i b?c

    // B?c 1: 0 - 50 kWh
    if (rem > 0) {
        amt = (rem > 50) ? 50 : rem;
        tien += amt * G1;
        rem -= amt;
    }

    // B?c 2: 51 - 100 kWh
    if (rem > 0) {
        amt = (rem > 50) ? 50 : rem;
        tien += amt * G2;
        rem -= amt;
    }

    // B?c 3: 101 - 200 kWh
    if (rem > 0) {
        amt = (rem > 100) ? 100 : rem;
        tien += amt * G3;
        rem -= amt;
    }

    // B?c 4: > 200 kWh
    if (rem > 0) {
        tien += rem * G4;
    }

    // Ph? phí theo lo?i h?
    switch (loai) {
        case 1: // h? gia dình
            phuPhi = tien * 0.05;
            break;
        case 2: // h? kinh doanh
            phuPhi = tien * 0.10;
            break;
        case 3: // h? s?n xu?t
            phuPhi = tien * 0.08;
            break;
    }

    tong = tien + phuPhi;

    printf("\nTien theo bac (truoc phu phi): %.0f VND", tien);
    printf("\nPhu phi: %.0f VND", phuPhi);
    printf("\nTong tien phai tra: %.0f VND\n", tong);

    return 0;
}

