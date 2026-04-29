#ifndef PASS_H 
#define PASSS_H

int buildCharacterPool(char all[], int useUpper, int useLower, int useNumber, int useSymbols);
void generatePassword(char all[], int index, int length, char password[]);
void saveToFile(char password[]);

#endif 