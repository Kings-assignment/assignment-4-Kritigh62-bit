// Write a C program to read the contents of a text file and display them on the screen.
#include<stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Open file in read mode
    fp = fopen("output.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read and display character by character
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    // Close file
    fclose(fp);

    return 0;
}