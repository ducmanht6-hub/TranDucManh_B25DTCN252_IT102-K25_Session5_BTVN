#include <stdio.h>

int main() {
    float a, b, x;
    printf("Enter number a: ");
    scanf("%f", &a);
    printf("Enter number b: ");
    scanf("%f", &b);
    if (a == 0) {
        if (b == 0) {
            printf("The equation has infinitely many solutions\n");
        } else {
            printf("The equation has no solution\n");
        }
    } else {
        x = -b / a;
        printf("The equation has one solution: x = %.2f\n", x);
    }
    return 0;
}

