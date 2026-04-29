// Write a C program that defines a structure Employee with members: name, employee ID, and salary. 
// Take input for 5 employees and display the details of the employee with the highest salary.
#include<stdio.h>

struct Employee{
    char name[50];
    int id;
    float salary;
};

int main(){
    struct Employee emp[5];
    int i, maxIndex =0;

    for(i=0; i< 5; i++){
        printf("\nEnter details of employee %d:\n", i + 1);

          printf("Enter name: ");
        scanf("%s", emp[i].name);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);
    }
    for(i = 1; i<5; i++){
        if(emp[i].salary>emp[maxIndex].salary){
            maxIndex = i;
        }
    }
      printf("\nEmployee with highest salary:\n");
    printf("Name: %s\n", emp[maxIndex].name);
    printf("ID: %d\n", emp[maxIndex].id);
    printf("Salary: %.2f\n", emp[maxIndex].salary);

    return 0;
    }