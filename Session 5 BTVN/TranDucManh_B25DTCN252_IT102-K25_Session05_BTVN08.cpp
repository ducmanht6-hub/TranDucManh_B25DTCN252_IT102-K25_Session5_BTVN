#include <stdio.h>

int main() {
    int soNuoc;
    float tien = 0;
    printf("Nhap so m3 nuoc tieu thu: ");
    scanf("%d", &soNuoc);
    if (soNuoc <= 0) {
        printf("So m3 khong hop le!\n");
        return 0;
    }
    if (soNuoc <= 10)
        tien = soNuoc * 6000;
    else if (soNuoc <= 20)
        tien = 10 * 6000 + (soNuoc - 10) * 7000;
    else if (soNuoc <= 30)
        tien = 10 * 6000 + 10 * 7000 + (soNuoc - 20) * 8500;
    else
        tien = 10 * 6000 + 10 * 7000 + 10 * 8500 + (soNuoc - 30) * 10000;
    printf("So tien phai tra: %.0f VND\n", tien);
    return 0;
}

