#include <stdio.h>

int main () {

    int gsl_prefix, group_identifier, publisher_code, item_number, check_digit;

    printf("Please enter your ISBN\n");
    scanf("%d-%d-%d-%d-%d",&gsl_prefix,&group_identifier,&publisher_code,&item_number,&check_digit);

    printf(" GSL prefix : %d\nGroup publisher : %d\nPublisher code : %d\nItem number : %d\nCheck digit : %d",gsl_prefix,group_identifier,publisher_code,item_number,check_digit);
    return 0;


}