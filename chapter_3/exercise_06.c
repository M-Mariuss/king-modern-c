#include <stdio.h>

int main() {

    int num1, denom1, num2, denom2;
    printf("Please enter the sum of two fractions : a/b+c/d\n");
    scanf("%d/%d+%d/%d",&num1,&denom1,&num2,&denom2);

    printf(" The sum of the two fractions is : %d/%d",num1*denom2+num2*denom1, denom1*denom2);

    return 0;
}