#include <stdio.h>

int main() {
    int tuoi;
    float giaVe = 20000; // giá vé co b?n (VNÐ)
    float soTienPhaiTra;

    printf("Nhap tuoi hanh khach: ");
    scanf("%d", &tuoi);

    if (tuoi < 0 || tuoi > 120) { // ki?m tra tu?i không h?p l?
        printf("Tuoi khong hop le\n");
    } 
    else if (tuoi < 6) {
        soTienPhaiTra = 0;
        printf("So tien ve : %.0f VND\n", soTienPhaiTra);
    } 
    else if (tuoi <= 18) {
        soTienPhaiTra = giaVe * 0.5;
        printf("So tien ve : %.0f VND\n", soTienPhaiTra);
    } 
    else if (tuoi <= 60) {
        soTienPhaiTra = giaVe;
        printf("So tien ve : %.0f VND\n", soTienPhaiTra);
    } 
    else {
        soTienPhaiTra = giaVe * 0.7;
        printf("So tien ve : %.0f VND\n", soTienPhaiTra);
    }

    return 0;
}

