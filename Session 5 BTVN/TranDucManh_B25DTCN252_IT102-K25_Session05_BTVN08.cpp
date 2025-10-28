#include <stdio.h>
int main() {
    int waterUsed;
    float total = 0;
    printf("Enter the amount of water consumed (m³): ");
    scanf("%d", &waterUsed);
    if (waterUsed <= 0) {
        printf("Invalid water amount!\n");
        return 0;
    }
    if (waterUsed <= 10)
        total = waterUsed * 6000;
    else if (waterUsed <= 20)
        total = 10 * 6000 + (waterUsed - 10) * 7000;
    else if (waterUsed <= 30)
        total = 10 * 6000 + 10 * 7000 + (waterUsed - 20) * 8500;
    else
        total = 10 * 6000 + 10 * 7000 + 10 * 8500 + (waterUsed - 30) * 10000;
    printf("Total amount to pay: %.0f VND\n", total);
    return 0;
}

