#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    if (c >= 'a' && c <= 'z') {
        printf("Uppercase equivalent: %c\n", c - 32);
    } 
    else if (c >= 'A' && c <= 'Z') {
        printf("Lowercase equivalent: %c\n", c + 32);
    } 
    else {
        printf("Not an alphabet letter.\n");
    }
    return 0;
}

