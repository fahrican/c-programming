#include<stdio.h>
#include<stdlib.h>

int main(){

  int wahl;
  float betrag;

  printf("\n EUR-ATS Umrechner \n");
  printf("\n 1. ATS --> Euro \n 2. Euro --> ATS \n");
  printf("\n Ihre Wahl 1 oder 2: ");
  scanf("%i",&wahl);

  if(wahl == 1){
    printf("\n Bitte den ATS Betrag eingeben: ");
    scanf("%f",&betrag);
    printf("\n %.2f ATS sind %.2f EUR \n",betrag, betrag * 0.073);
  }

  if(wahl == 2){
    printf("\n Bitte den EUR Betrag eingeben: ");
    scanf("%f",&betrag);
    printf("\n %.2f EUR sind %.2f ATS \n",betrag, betrag * 13.760);
  }

 return 0;
}
