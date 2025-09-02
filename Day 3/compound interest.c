#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, n, amount, ci;

    printf("Enter the principal: ");
    scanf("%f", &p);

    printf("Enter the rate of interest (in %%): ");
    scanf("%f", &r);

    printf("Enter the time (in years): ");
    scanf("%f", &t);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%f", &n);

    amount = p * pow((1 + (r / (n * 100))), n * t);
    ci = amount - p;

    printf("Compound Interest: %f\n", ci);
    printf("Total Amount: %f\n", amount);

    return 0;
}
