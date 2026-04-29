// Write a C program that defines a structure Book with members: title, author, and price. 
// Allow the user to enter details of n books and then display all books whose price is above a 
// user-defined value.
#include<stdio.h>

struct Book{
    char title[100];
    char author[100];
    float price;
};
int main(){
    int n,i;
    float limit;

    printf("Enter number of books:");
    scanf("%d", &n);

    struct Book books[n];

    for(i=0; i<n; i++){
        printf("\nEnter details of books %d:\n", i + 1);

        printf("Title: ");
        scanf(" %[^\n]", books[i].title);   // reads full line

        printf("Author: ");
        scanf(" %[^\n]", books[i].author);

        printf("Price: ");
        scanf("%f", &books[i].price);
}
printf("\nEnter price limit:");
scanf("%f", &limit);

 printf("\nBooks with price above %.2f:\n", limit);

    int found = 0;
    for (i = 0; i < n; i++) {
        if (books[i].price > limit) {
            printf("\nTitle: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Price: %.2f\n", books[i].price);
            found = 1;
        }
    }

    if (!found) {
        printf("No books found above this price.\n");
    }

    return 0;
}