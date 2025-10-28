#include <stdio.h>

int main() {
    int kWh, type;
    double cost = 0.0, surcharge = 0.0, total = 0.0;
    const double G1 = 1500.0, G2 = 2000.0, G3 = 2500.0, G4 = 3000.0;
    printf("Enter the electricity consumption (kWh): ");
    scanf("%d", &kWh);
    printf("Enter customer type (1 - Household, 2 - Business, 3 - Industrial): ");
    scanf("%d", &type);
    if (kWh < 0) {
        printf("Error: Invalid kWh value.\n");
        return 0;
    }
    if (type < 1 || type > 3) {
        printf("Error: Invalid customer type.\n");
        return 0;
    }
    int remaining = kWh;
    int amount;
    if (remaining > 0) {
        amount = (remaining > 50) ? 50 : remaining;
        cost += amount * G1;
        remaining -= amount;
    }
    if (remaining > 0) {
        amount = (remaining > 50) ? 50 : remaining;
        cost += amount * G2;
        remaining -= amount;
    }
    if (remaining > 0) {
        amount = (remaining > 100) ? 100 : remaining;
        cost += amount * G3;
        remaining -= amount;
    }
    if (remaining > 0) {
        cost += remaining * G4;
    }
    switch (type) {
        case 1:
            surcharge = cost * 0.05; 
            break;
        case 2:
            surcharge = cost * 0.10; 
            break;
        case 3:
            surcharge = cost * 0.08; 
            break;
    }
    total = cost + surcharge;
    printf("\nElectricity cost (before surcharge): %.0f VND", cost);
    printf("\nSurcharge: %.0f VND", surcharge);
    printf("\nTotal amount to pay: %.0f VND\n", total);
    return 0;
}

