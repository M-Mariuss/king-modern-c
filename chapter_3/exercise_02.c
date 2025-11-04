#include <stdio.h>


int main() {

    int item_number, month, day, year;
    float item_price;

    printf("Enter the item number\n");
    scanf("%d",&item_number);

    printf("Enter the price number\n");
    scanf("%f",&item_price);

    printf("Enter the date mm/dd/yyyy\n");
    scanf("%d/%d/%d", &month,&day,&year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%i\t$ %.2f\t%i/%i/%i",item_number,item_price,month,day,year);

    return 0;

}