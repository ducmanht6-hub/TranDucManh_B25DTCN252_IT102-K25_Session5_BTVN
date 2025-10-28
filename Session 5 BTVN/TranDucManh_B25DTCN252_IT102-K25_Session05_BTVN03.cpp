#include <stdio.h>

int main() {
    float diem;

    printf("Nhap diem: ");
    scanf("%f", &diem);

    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le!\n");
    } else if (diem >= 8) {
        printf("Hoc luc gioi\n");
    } else if (diem >= 6.5) {
        printf("Hoc luc kha\n");
    } else if (diem >= 5) {
        printf("Hoc luc trung binh\n");
    } else {
        printf("Hoc luc yeu\n");
    }

    return 0;
}

