#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    // Quadratic formula 

    float a, b, c;
    float root1, root2, discriminant;

    printf("Please enter the values for a, b and c\n");
    scanf("%f%f%f", &a, &b, &c);

    // Validate that a is not zero
    if (a == 0) {
        printf("Error: 'a' cannot be zero for a quadratic equation.\n");
        return 1;
    }

    discriminant = (b * b) - 4 * a * c;

    if (discriminant == 0) {

        root1 = -b / (2 * a);
        root2 = root1;

        printf("The solution to the quadratic formula is : %.2f\n", root1);
    }
    else if (discriminant > 0) {

        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("The solutions to the quadratic formula are : %.2f and %.2f\n", root1, root2);
    }
    else if (discriminant < 0) {
        float realpart = -b / (2 * a);
        float imaginarypart = sqrt(-discriminant) / (2 * a);

        printf("The solutions to the quadratic formula are the complex numbers : %.2f + %.2fi and %.2f - %.2fi\n", realpart, imaginarypart, realpart, imaginarypart);
    }
    return 0;
}