#include<stdio.h>
#include<stdlib.h>

int main(){

   int a, b, result;
   printf("\n TRUTHTABLE \n");
   printf("\n A \tB \tresult \n");

   printf("\nImplication");
   a = 0; b = 1; result = !(a && !b);
   printf("\n %i \t%i \t%i \n", a, b, result);

    printf("\nNAND");
    a = 0; b = 0; result = !(a && b);
   printf("\n %i \t%i \t%i \n", a, b, result);

    printf("\nNOR");
    a = 0; b = 0; result = !(a || b);
   printf("\n %i \t%i \t%i \n", a, b, result);

    printf("\nXOR");
    a = 1; b = 0; result = (a ^ b);
   printf("\n %i \t%i \t%i \n", a, b, result);

   printf("\nXNOR");
    a = 1; b = 1; result = !(a ^ b);
   printf("\n %i \t%i \t%i \n", a, b, result);

 return 0;
}
