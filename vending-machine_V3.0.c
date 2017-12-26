#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Vending Machine V3.0\n");

    printf("\nPlease, choose now a drink: \n");
    printf("1) Soda Water (0.80 Euro) \n");
    printf("2) Pepsi (1.00 Euro)\n");
    printf("3) Ottakringer (2.00 Euro) \n");

    int selection;
    float price;
    printf("\nPlease type now 1,2 or 3: ");
    scanf("%d", &selection);

    switch(selection){

    case 1:
        price = 0.80;
        break;

    case 2:
        price = 1.00;
        break;

    case 3:
        price = 2.00;
        break;
    }

    int quanti;
    printf("\nPlease, enter how many drinks you want: ");
    scanf("%d", &quanti);

    // Here starts the payment process with a loop
    printf("\n--- payment process --- \n");

    float pay = price * quanti;
    float inser;

    do{
        printf("\nThere are %.2f Euro left. \n", pay);
        printf("Please, insert more money: ");
        scanf("%f", &inser);
        pay -= inser;

    }while(pay > 0.0);

    // At this point the customer can see, how many drinks he gets
    printf("\n--- drinks output --- \n");
    int outGo;

    for(outGo = 1; outGo <= quanti; outGo++){

        printf("\nBottle %d of %d comes out.", outGo, quanti);

    }

    printf("\nThank you, please take now your drinks! \n");

 return 0;
}
