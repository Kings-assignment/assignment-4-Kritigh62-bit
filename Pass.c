#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "passs.h"

int main(){
    int length;
    int useNumber, useUpper, useLower, useSymbols;

    char all[100];
    char password[100];

    printf("Enter password length: ");
    scanf("%d", &length);

    if(length <= 0){
        printf("Error: Password length must be positive!\n");
        return 1;
    }

    printf("Use Uppercase? (Yes-1 No-0): ");
    scanf("%d", &useUpper);

    printf("Use Lowercase? (Yes-1 No-0): ");
    scanf("%d", &useLower);

    printf("Use Number? (Yes-1 No-0): ");
    scanf("%d", &useNumber);

    printf("Use Symbols? (Yes-1 No-0): ");
    scanf("%d", &useSymbols);

   
    if((useUpper < 0 || useUpper > 1) ||
       (useLower < 0 || useLower > 1) ||
       (useNumber < 0 || useNumber > 1) ||
       (useSymbols < 0 || useSymbols > 1)){
        printf("Error: Please enter only 0 or 1!\n");
        return 1;
    }

    int index = buildCharacterPool(all, useUpper, useLower, useNumber, useSymbols);

    if(index == 0){
        printf("Error: No character set selected!\n");
        return 1;
    }

    srand(time(0));

    generatePassword(all, index, length, password);

    printf("\nGenerated password: %s\n", password);

    saveToFile(password);

    return 0;
}

