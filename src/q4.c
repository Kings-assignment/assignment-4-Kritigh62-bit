// Write a C program that dynamically allocates memory for an integer array of size n, where n is entered by the user. Prompt the user to enter n elements and display them using pointers.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n; 

    printf("Enter number of elements:");
    scanf("%d", &n);

    // Dynamically allocate memory
    int *arr= (int*)malloc(n * sizeof(int));

    // Check
    if(arr == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
      printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }

    printf("Element are:\n");
    for(int i = 0; i<n; i++){
        printf("%d ", *(arr + i));
    }
    free(arr);
    return 0;
}