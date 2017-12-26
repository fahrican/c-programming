#include<stdio.h>
#include<stdlib.h>

int main(){

    int year, month, day;

    printf("\n CALENDAR \n");
    printf("\n Please, enter the year: ");
    scanf("%i", &year);
    printf("\n Please, enter the month: ");
    scanf("%i", &month);

    if(month >= 1 && month <= 12 && year > 1582){ /*(1)*/

        switch(month){ /*(2)*/

        case 2: /*(3)*/
            if (!((year%100)%4) && (year%100) /*(4)*/
                || !(year%400))
            day = 29;

            else
                day = 28;
            break; /*(5)*/

        case 2*2: /*(6)*/
        case 6:
        case 9: case 11: /*(7)*/
            day = 30;
            break;

        default: /*(8)*/
            day = 31;

        }

        printf("\n %i month %i has %i days. \n", year, month, day);
    }

    else{

        printf("\n Incorrect date enter! \n");
    }

 return 0;
}
