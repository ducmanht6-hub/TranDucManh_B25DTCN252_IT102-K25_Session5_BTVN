#include <stdio.h>

int main() {
    float salaryCoefficient;
    int workingDays, position;
    float allowance, bonus = 0, totalSalary;
    printf("Enter salary coefficient: ");
    scanf("%f", &salaryCoefficient);
    printf("Enter number of working days: ");
    scanf("%d", &workingDays);
    printf("Enter position (1: Employee, 2: Team Leader, 3: Manager): ");
    scanf("%d", &position);
    switch (position) {
        case 1: allowance = 50000; break;
        case 2: allowance = 100000; break;
        case 3: allowance = 200000; break;
        default:
            printf("Invalid position!\n");
            return 0;
    }
    if (workingDays > 26) {
        bonus = (workingDays - 26) * 200000;
    }
    totalSalary = workingDays * 100000 * salaryCoefficient + allowance + bonus;
    printf("\n--- Result ---\n");
    printf("Allowance: %.0f VND\n", allowance);
    printf("Bonus: %.0f VND\n", bonus);
    printf("Total Salary: %.0f VND\n", totalSalary);
    return 0;
}

