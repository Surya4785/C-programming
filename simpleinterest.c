#include <stdio.h>

int main()
{
    float principal, rate, time, interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;

    printf("Simple Interest is: %.2f\n", interest);

    return 0;
}
