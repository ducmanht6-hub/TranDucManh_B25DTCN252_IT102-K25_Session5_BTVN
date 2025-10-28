#include <stdio.h>

int main() {
    float score;

    printf("Enter the score: ");
    scanf("%f", &score);

    if (score < 0 || score > 10) {
        printf("Invalid score!\n");
    } else if (score >= 8) {
        printf("Excellent performance\n");
    } else if (score >= 6.5) {
        printf("Good performance\n");
    } else if (score >= 5) {
        printf("Average performance\n");
    } else {
        printf("Poor performance\n");
    }

    return 0;
}

