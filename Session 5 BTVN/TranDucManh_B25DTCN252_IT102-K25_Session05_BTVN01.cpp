#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Enter a number a: ");
    scanf("%d", &a);
    printf("Enter a number b: ");
    scanf("%d", &b);
    if (a > b)
        printf("The larger number is %d", a);
    else if (a < b)
        printf("The larger number is %d", b);
    else
        printf("The two numbers are equal");
    return 0;
}

