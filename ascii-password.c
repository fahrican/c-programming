#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char geheim[10], passwort[80];
    int versuch = 3;

    geheim[3] = 'p';
    geheim[2] = 109;
    geheim[7] = 114;
    geheim[5] = 116;
    geheim[0] = 67;
    geheim[9] = 'x';
    geheim[1] = 111;
    geheim[8] = '\0';
    geheim[4] = geheim[1]+6;
    geheim[6] = 101;

    printf("\n Sie haben 3 Versuche. \n");

    do{
        printf("\n Bitte Passwort eingeben \n > ");
        gets(passwort);

        if(strcmp(geheim, passwort) == 0){
           printf("\n Passwort ist okay! \n");
           break;
        }
        else{

            printf("\n Fehlerhaftes Passwort! \n");
        }

        versuch--;

    }while(versuch > 0);


 return 0;
}
