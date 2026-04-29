// Write a C program to create a file and write a user-entered string into it. Then display a 
// message confirming that the file has been written successfully.
#include<stdio.h>

int main() {
    FILE *fp;
    char str[100];

    // Open file in write mode
    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Take input from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Write to file
    fputs(str, fp);

    // Close file
    fclose(fp);

    // Confirmation message
    printf("File has been written successfully.\n");

    return 0;
}