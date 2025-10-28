#include <stdio.h>

int main() {
    float a, b, result;
    char op;
    printf("Enter the first number (a): ");
    scanf("%f", &a);
    printf("Enter the second number (b): ");
    scanf("%f", &b);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // có kho?ng tr?ng d? b? qua ký t? Enter
    switch (op) {
        case '+':
            result = a + b;
            printf("Result: %.2f + %.2f = %.2f\n", a, b, result);
            break;
        case '-':
            result = a - b;
            printf("Result: %.2f - %.2f = %.2f\n", a, b, result);
            break;
        case '*':
            result = a * b;
            printf("Result: %.2f * %.2f = %.2f\n", a, b, result);
            break;
        case '/':
            if (b == 0)
                printf("Error: Cannot divide by zero!\n");
            else {
                result = a / b;
                printf("Result: %.2f / %.2f = %.2f\n", a, b, result);
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
    }
    return 0;
}

