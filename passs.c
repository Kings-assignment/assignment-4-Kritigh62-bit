#include<stdio.h>
#include<stdlib.h>
#include "passs.h"

int buildCharacterPool(char all[], int useUpper, int useLower, int useNumber, int useSymbols)
{
    char upper[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower[]= "abcdefghijklmnopqrstuvwxyz";
    char number[]= "0123456789";
    char symbols[]= "!@#$%^&*()_=+-?></";

    int i, index= 0;

    if (useUpper){
        for (i = 0; upper[i] != '\0'; i++)
          all[index++] = upper[i];
    }
    if (useLower){
       for (i = 0; lower[i] != '\0'; i++)
            all[index++] = lower[i];
    }
    if (useNumber) {
        for (i = 0; number[i] != '\0'; i++)
            all[index++] = number[i];
    }
    if (useSymbols) {
        for (i = 0; symbols[i] != '\0'; i++)
            all[index++] = symbols[i];
    }

    return index; 
    }

    //Generate password
    void generatePassword(char all[], int index, int length, char password[])
{
    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % index;
        password[i] = all[randomIndex];
    }
    password[length] = '\0';
}

// Save password to file
void saveToFile(char password[])
{
    FILE *file = fopen("passwords.txt", "a");

    if (file != NULL) {
        fprintf(file, "Generated Password: %s\n", password);
        fclose(file);
    } else {
        printf("Error opening file!\n");
    }
} 