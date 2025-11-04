#include <stdio.h>


int main() {

    int month , day , year ;
    printf("Please enter a date with the format mm/dd/yyyy\n");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("The date you entered is %d%d%d",year ,month, day);


    return 0;
}