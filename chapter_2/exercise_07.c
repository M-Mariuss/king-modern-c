#include <stdio.h>

int main() {

    float loan_amount;
    printf("Enter the loan amount you have to pay off\n");
    scanf("%f", &loan_amount);

    float interest;
    printf("Enter the monthly interest rate\n");
    scanf("%f", &interest);

    float monthly_amount;
    printf("Enter the fixed monthly payment for the loan\n");
    scanf("%f",&monthly_amount);

    int months = 0;

    while ( loan_amount  > 0 ) {
        loan_amount = loan_amount  + ( (loan_amount  * ( interest /12 ) )  / 100) ;
        loan_amount = loan_amount  - monthly_amount ;
        months++;
    }

    printf(" You will pay your loan in %i months\n", months);

    return 0;

}