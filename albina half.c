#include <cs50.h>
#include <stdio.h>

int main() {
    float bill, tax, tip;

    
    printf("Enter the bill amount: $");
    scanf("%f", &bill);  
    printf("Enter tax percentage: ");
    scanf("%f", &tax);
    printf("Enter tip percentage: ");
    scanf("%f", &tip);

    // llogaritja e shumes
    float total = bill + (bill * (tax / 100)) + (bill * (tip / 100));

    // llogarit dhe shfaq shumen
    printf("Each person should pay: $%.2f\n", total / 2);

    return 0;
}
