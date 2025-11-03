#include <stdio.h>

int main() {

    int money;
    printf("Enter the amount of money you have\n");
    scanf("%i",&money);

    printf(" You have : %i 20 dollar bills, %i 10 dollar bills, %i 5 dollar bills and %i 1 dollar bills", money/20, (money%20)/10, ((money%20)%10)/5, (((money%20)%10)%5)/1);

    return 0;
}