#include <stdio.h>

int main() {
    float income, taxRate, taxToPay;
    printf("Enter your income (in million VND): ");
    scanf("%f", &income);
    if (income <= 5)
        taxRate = 5;
    else if (income <= 10)
        taxRate = 10;
    else
        taxRate = 15;
    taxToPay = income * (taxRate / 100);
    printf("Income tax to pay: %.2f million VND\n", taxToPay);
    return 0;
}

