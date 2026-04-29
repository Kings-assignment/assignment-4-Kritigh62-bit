// Write a C program that reverses an array of characters using pointers.
#include<stdio.h>

int main(){
    char arr[] = "aspire";

    char *start = arr;
    char *end = arr;
    int length = 0;
    char temp;

    while(*(start + length) != '\0'){
        length++;
        end++;
    }

    printf("String is: %s\n", arr);

    // Reverse the string using pointers
    for (int i = 0; i < length / 2; i++){
        temp = *(start + i);
        *(start + i) = *(end - 1 - i);
        *(end - 1 - i) = temp;
    }

    printf("Reverse of string is: %s\n", arr);

    return 0;
}