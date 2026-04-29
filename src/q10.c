// Write a C program that defines a structure Car with members: model, year, and mileage. 
// Store information for 3 cars and find the car with the lowest mileage.
#include <stdio.h>

// Define structure Car
struct Car {
    char model[100];
    int year;
    float mileage;
};

int main() {
    struct Car cars[3];
    int i, minIndex = 0;

    // Input details for 3 cars
    for (i = 0; i < 3; i++) {
        printf("\nEnter details of car %d:\n", i + 1);

        printf("Model: ");
        scanf(" %[^\n]", cars[i].model);

        printf("Year: ");
        scanf("%d", &cars[i].year);

        printf("Mileage: ");
        scanf("%f", &cars[i].mileage);
    }

    // Assume first car has lowest mileage
    minIndex = 0;

    // Find car with lowest mileage
    for (i = 1; i < 3; i++) {
        if (cars[i].mileage < cars[minIndex].mileage) {
            minIndex = i;
        }
    }

    // Display result
    printf("\nCar with lowest mileage:\n");
    printf("Model: %s\n", cars[minIndex].model);
    printf("Year: %d\n", cars[minIndex].year);
    printf("Mileage: %.2f\n", cars[minIndex].mileage);

    return 0;
}