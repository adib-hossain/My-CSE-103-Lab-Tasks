#include <stdio.h>

void main()
{
    int ID;
    float hour, perHour, Salary;

    printf("Enter the employee's ID : ");
    scanf("%d", &ID);
    printf("Enter the hours worked : ");
    scanf("%f", &hour);
    printf("Enter his payment per hour : ");
    scanf("%f", &perHour);

    Salary = hour * perHour;

    printf("The salary of Employee Id no.%d is : %.2f", ID, Salary);
}