#include <stdio.h>

int main() {
    int age;
    float ticketPrice = 20000;
    float amountToPay;
    printf("Enter passenger's age: ");
    scanf("%d", &age);
    if (age < 0 || age > 120) {
        printf("Invalid age!\n");
    } 
    else if (age < 6) {
        amountToPay = 0;
        printf("Ticket price: %.0f VND (Free for children under 6)\n", amountToPay);
    } 
    else if (age < 18) {
        amountToPay = ticketPrice * 0.5;
        printf("Ticket price: %.0f VND (50%% discount for minors)\n", amountToPay);
    } 
    else if (age < 60) {
        amountToPay = ticketPrice;
        printf("Ticket price: %.0f VND (Full price)\n", amountToPay);
    } 
    else {
        amountToPay = ticketPrice * 0.7;
        printf("Ticket price: %.0f VND (30%% discount for seniors)\n", amountToPay);
    }
    return 0;
}

