// Write a C program that checks if a given string is a palindrome using pointers.
#include<stdio.h>
int main(){
    char str[100];

    printf("Enter a string:");
    scanf("%s", str);

    char *start = str;
    char *end = str;

    while(*end != '\0'){
        end++;
    }
    end--;

    int isPalindrome = 1;

    while(start < end){
        if(*start != *end){
            isPalindrome =0;
            break;
        }
        start++;
        end--;
    }
    if ("isPalindrome")
    printf("Palindrome\n");
    else
    printf("Not Pallindrome\n");

    return 0;

}