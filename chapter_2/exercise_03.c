#include <stdio.h>

#define TAX_PERCENTAGE 5

int main() {

    float amount;
    printf(" Enter the amount of money \n");
    scanf("%f",&amount);

    printf(" The amount of money you have after a 5 %% tax is %f", amount - ( amount * TAX_PERCENTAGE / 100.f) );

    return 0;
}