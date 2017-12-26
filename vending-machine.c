#include<stdio.h>
#include<stdlib.h>

int main(){

    int select;
    float price, entry;

    printf("Vending Machine V2.0 \n");

    printf("\nChoose a drink: \n");

    printf("1) Water (0.50 Euro) \n");
    printf("2) Lemonade (1.00 Euro) \n");
    printf("3) Beer (2.00 Euro) \n");

    printf("\nNow, type 1, 2 or 3: ");
    scanf("%d", &select);


    switch(select){

    case 1:
        price = 0.50;
        break;

    case 2:
        price = 1.00;
        break;

    case 3:
        price = 2.00;
        break;
    }

    printf("Please enter now %.2f Euro: ", price);
    scanf("%f", &entry);

    if(entry == price){

        printf("\nThank you, just take now your drink. \n");
    }

    else{
        printf("\nYou didn't throw a Euro. \n");
    }

 return 0;
}
