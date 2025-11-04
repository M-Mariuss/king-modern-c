#include <stdio.h>


int main() {

    int first_part, second_part, third_part;
    printf("Please enter a phone number of the format (xxx) xxx-xxxx");
    scanf("(%i) %i-%i",&first_part,&second_part,&third_part);

    printf("You entered %i.%i.%i", first_part,second_part,third_part);

    return 0;



}