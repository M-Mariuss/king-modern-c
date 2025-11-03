#include <stdio.h>

#define PI 3.14159

int main() {

    float radius;
    printf(" Enter the radius of the sphere \n ");
    scanf("%f", &radius);

    printf( "The volume of a  sphere  with a radius of : %f is %f ", radius, 4.0f/  3.0f * PI * radius * radius * radius );

    return 0;
}