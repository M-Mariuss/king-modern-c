#include <stdio.h>

int main() {

    int x;
    printf(" Enter a value for x\n");
    scanf("%x",&x);

    printf(" The result of the polynomial 3x^5 + 2x^4 - 5x^3 - x^2  + 7x  - 6 where x is %i equals to %i",x, 3*x*x*x*x*x  + 2*x*x*x*x - 5*x*x*x - x*x + 7*x -6 );

    return 0;

}